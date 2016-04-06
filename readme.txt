1.befoe compile ,please install gyp and ninja
>sudo apt-get install gyp
>sudo apt-get install ninja-build

2.compile
>gyp --depth=. --format=ninja ./build.gyp
>ninja -C out/Default
