# PCSX-ReARMed - yet another PCSX fork (MiyooCFW)

This is YET another downstream fork of `PCSX-ReARMed` aimed at MiyooCFW, to be as close possible to
original source with little changes (mostly minor fixes for UNAI and when cross-compiling for armv5).

## BIOS

The emulator will recognize BIOSes in MiyooCFW by placing them in `/$HOME/emu/pcsx_rearmed/bios/`

## Cross-Compile build (MiyooCFW):

It is recommended to use latest toolchain (gcc-9.4.0), configure&compile via docker or podman from src dir:
- configure
```
./configure --platform=miyoo
```
for static SDK pass `--disable-dynamic` option, be aware that this will disable any additional plugins

- compile binary:
```
make -j$(nproc)
```

- generate IPK package:
```
make ipk
```

## Profile build (optional)

- generate data
```
PROFILE=YES PROFILE_PATH=/mnt ./configure --platform=miyoo
make clean
make -j$(nproc)
```
place output in ./profile src dir

- apply profiling
```
PROFILE=APPLY ./configure --platform=miyoo
make clean
make -j$(nproc)
```
