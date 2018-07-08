#ifndef __FMODWRAPPER_H_
#define __FMODWRAPPER_H_

#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "fmodpfn.h"

#define FN(ret, name, param) PFN_##name name;
typedef struct fmodfn_t {
 void* lib;
 unsigned int dbg_level;
 #include "fmodfn.inc"
} fmodfn_t;
#undef FN

extern fmodfn_t fmodfn;

#define LOAD(name) if(!fmodfn.name) fmodfn.name=(PFN_##name)dlsym(fmodfn.lib, "FMOD_" #name)

#define FAKE(name) static int done=1; if(done) {printf("FakeMODex: Warning, calling faked %s function\n", #name); done=0;} return FMOD_OK

#endif //__FMODWRAPPER_H_