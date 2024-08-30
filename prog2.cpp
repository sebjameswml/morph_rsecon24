/*
 * Visualize some graphs as an example use of morphologica
 */
#include <morph/Visual.h>
#include <morph/Grid.h>       // To use a Grid
#include <morph/GridVisual.h> // To visualize the Grid
#include <morph/Scale.h>      // To scale values

int main()
{
    morph::Visual v(1536, 1536, "prog2");

    unsigned int pixels = 400;
    float width = morph::mathconst<float>::two_pi;
    float dx = width / pixels;
    float os = -0.5f * width;
    // Grid constructor arguments:
    // width (px), height (px), grid spacing, offset of corner.
    morph::Grid the_plane (pixels, pixels,
                           morph::vec<float, 2>{ dx, dx },
                           morph::vec<float, 2>{ os, os });

    std::cout << "Grid width: " << the_plane.width() << " cf. width: " << width << std::endl;

    // Make a container of scalar values to plot across the plane
    morph::vvec<float> z_data (the_plane.n, 0.0f);

    // Loop through grid, setting data from the function z = f(x,y)
    for (unsigned int i = 0; i < the_plane.n; ++i) {
        morph::vec<float, 2> xy = the_plane[i];
        float z = sin(cos(tan( xy[0] ))) * sin(cos(tan( xy[1] )));
        z_data[i] = z;
    }

    auto gridvis = std::make_unique<morph::GridVisual<float>>(&the_plane, morph::vec<float>{0,0,0});
    v.bindmodel (gridvis); // boilerplate

    gridvis->setScalarData (&z_data);

    gridvis->gridVisMode = morph::GridVisMode::Columns; // Try Triangles
    gridvis->interpolate_colour_sides = true;           // Default is false. Try it out
    gridvis->cm.setType (morph::ColourMapType::HSV1D); // Try Jet or HSV1D

    gridvis->finalize();         // Make model ready to add to the scene

    v.addVisualModel (gridvis);

    v.keepOpen();
    return 0;
}
