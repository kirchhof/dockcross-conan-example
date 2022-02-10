docker run --rm --platform=linux/amd64 dockcross/linux-armv7-lts > ./dockcross
chmod +x dockcross
./dockcross -a --platform=linux/amd64 bash -c './build.sh'