# morphologica_template

An example project that uses morphologica. Demonstrates how you
incorporate morphologica into your own programs.

Really, this project is just one `CMakeLists.txt` file containig the
commands required to use morphologica and a single target (prog1),
which compiles the example program `prog1.cpp`.

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
