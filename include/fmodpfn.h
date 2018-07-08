#ifndef __FMODPFN_H_
#define __FMODPFN_H_

#include "fmod1_common.h"

#define FN(ret, name, params) typedef ret (*PFN_##name) params;
#include "fmodfn.inc"
#undef FN

#endif //__FMODPFB_H_