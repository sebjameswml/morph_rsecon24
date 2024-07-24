# morphologica_template

This example project demonstrates how you
can write and build a program that uses morphologica as a library.

Really, this project is just one `CMakeLists.txt` file containing the
commands required to use morphologica and a single target (prog1),
which compiles the example program `prog1.cpp`.

To make your own program, you could either replace 
prog1.cpp with your own code, or incorporate the relevant parts of the 
CMakeLists.txt file into your own CMakeLists.txt in another project.

To build and run the example:

```bash
# Clone this example
git clone git@github.com:ABRG-Models/morphologica_template # or your fork of it

# Install morphologica dependencies (assuming Debian/Ubuntu)
sudo apt install build-essential cmake git wget  \
                 freeglut3-dev libglu1-mesa-dev libxmu-dev libxi-dev \
                 libglfw3-dev libfreetype-dev

# Clone, copy or symlink morphologica INSIDE your example:
cd morphologica_template # or whatever you named your fork/copy
git clone git@github.com:ABRG-Models/morphologica

# Build prog1 in a 'build' directory
mkdir build
cd build
cmake ..
make
./prog1 # You should see a window containing some graphs
```
