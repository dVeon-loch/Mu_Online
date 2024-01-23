This repo is in dire need of a cleanup. 

TODO (Current)
- [ ] Migrate solution to VS2010 (First iteration of VS to use MSBuild)
 - Get InGameShop library building correctly in VS2010
 - Remove all legacy DX components
- [ ] Attempt direct upgrade to VS2022
- [ ] Include SDL2 in project
- [ ] Migrate windowing system to make use of SDL2 windows
- [ ] Migrate audio system to make use of SDL2 audio
- [ ] Migrate input system to make use of SDL2 input

TODO ITEMS (in order):

- Get Visual Studio project settings working with relative paths
- Remove or figure out way to not include all of the required DLLs etc. (might be no way around this)
- Update to latest Visual Studio toolchain
- Migrate to CMake project
- Update to latest/modern CPP standard and remove unneeded libs (e.g. boost smart pointers not needed anymore, probably more)
- More TODOs will be added as required
