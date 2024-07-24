# morphologica_template

An example project that uses morphologica. Demonstrates how you incorporate morphologica into your own program.

To build and run:

```bash
# Clone this example
git clone git@github.com:ABRG-Models/morphologica_template # or your fork of it

# Install morphologica dependencies (assuming Debian/Ubuntu)
sudo apt install build-essential cmake git wget  \
                 freeglut3-dev libglu1-mesa-dev libxmu-dev libxi-dev \
                 libglfw3-dev libfreetype-dev libarmadillo-dev libhdf5-dev

# Clone, copy or symlink morphologica INSIDE your example:
cd morphologica_template # or whatever you named your fork/copy
git clone git@github.com:ABRG-Models/morphologica

# Build
mkdir build
cd build
cmake ..
make
./prog1
```
