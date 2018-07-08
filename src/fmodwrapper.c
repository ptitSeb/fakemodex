#include <stdio.h>

#include "fmodwrapper.h"

fmodfn_t fmodfn;

void __attribute__((constructor)) LoadFMOD() {
    printf("FakeMODex : loading FMOD\n");
    fmodfn.lib = dlopen("libfmod.so", RTLD_LAZY);
    if(!fmodfn.lib)
        printf("FakeMODex: WARNING, cannot load fmod (because: %s), will crash later\n", dlerror());
}