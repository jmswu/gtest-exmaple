# Instructions
Start by installing the gtest development package:

```console
sudo apt-get install libgtest-dev
```

Note that this package only install source files. You have to compile the code yourself to create the necessary library files. These source files should be located at /usr/src/gtest. Browse to this folder and use cmake to compile the library:

```console
sudo apt-get install cmake # install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
 
# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
sudo cp ./lib/*.a /usr/lib
```

# Build and run
```console
mkdir build && cd build && cmake .. && make -j && ./unit_test
```