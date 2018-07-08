#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_System_SetNetworkProxy        (FMOD_SYSTEM *system, const char *proxy)
{
    LOAD(System_SetNetworkProxy);
    return fmodfn.System_SetNetworkProxy((FMOD1_SYSTEM*)system, proxy);
}
FMOD_RESULT F_API FMOD_System_GetNetworkProxy        (FMOD_SYSTEM *system, char *proxy, int proxylen)
{
    LOAD(System_GetNetworkProxy);
    return fmodfn.System_GetNetworkProxy((FMOD1_SYSTEM*)system, proxy, proxylen);
}
FMOD_RESULT F_API FMOD_System_SetNetworkTimeout      (FMOD_SYSTEM *system, int timeout)
{
    LOAD(System_SetNetworkTimeout);
    return fmodfn.System_SetNetworkTimeout((FMOD1_SYSTEM*)system, timeout);
}
FMOD_RESULT F_API FMOD_System_GetNetworkTimeout      (FMOD_SYSTEM *system, int *timeout)
{
    LOAD(System_GetNetworkTimeout);
    return fmodfn.System_GetNetworkTimeout((FMOD1_SYSTEM*)system, timeout);
}
