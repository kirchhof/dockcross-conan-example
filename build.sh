mkdir -p build
cd build
conan install --build missing ..
cmake -G Ninja ..
ninja