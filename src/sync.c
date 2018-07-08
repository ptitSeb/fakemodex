#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_Sound_GetNumSyncPoints        (FMOD_SOUND *sound, int *numsyncpoints)
{
    LOAD(Sound_GetNumSyncPoints);
    return fmodfn.Sound_GetNumSyncPoints((FMOD1_SOUND*)sound, numsyncpoints);
}
FMOD_RESULT F_API FMOD_Sound_GetSyncPoint            (FMOD_SOUND *sound, int index, FMOD_SYNCPOINT **point)
{
    LOAD(Sound_GetSyncPoint);
    return fmodfn.Sound_GetSyncPoint((FMOD1_SOUND*)sound, index, (FMOD1_SYNCPOINT**)point);
}
FMOD_RESULT F_API FMOD_Sound_GetSyncPointInfo        (FMOD_SOUND *sound, FMOD_SYNCPOINT *point, char *name, int namelen, unsigned int *offset, FMOD_TIMEUNIT offsettype)
{
    LOAD(Sound_GetSyncPointInfo);
    return fmodfn.Sound_GetSyncPointInfo((FMOD1_SOUND*)sound, (FMOD1_SYNCPOINT*)point, name, namelen, offset, TimeUnit(offsettype));
}
FMOD_RESULT F_API FMOD_Sound_AddSyncPoint            (FMOD_SOUND *sound, unsigned int offset, FMOD_TIMEUNIT offsettype, const char *name, FMOD_SYNCPOINT **point)
{
    LOAD(Sound_AddSyncPoint);
    return fmodfn.Sound_AddSyncPoint((FMOD1_SOUND*)sound, offset, TimeUnit(offsettype), name, (FMOD1_SYNCPOINT**)point);
}
FMOD_RESULT F_API FMOD_Sound_DeleteSyncPoint         (FMOD_SOUND *sound, FMOD_SYNCPOINT *point)
{
    LOAD(Sound_DeleteSyncPoint);
    return fmodfn.Sound_DeleteSyncPoint((FMOD1_SOUND*)sound, (FMOD1_SYNCPOINT*)point);
}
