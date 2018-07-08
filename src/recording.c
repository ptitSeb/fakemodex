#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_System_GetRecordNumDrivers    (FMOD_SYSTEM *system, int *numdrivers) 
{
    FAKE(System_GetRecordNumDrivers);
}
FMOD_RESULT F_API FMOD_System_GetRecordDriverInfo    (FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid) 
{
    FAKE(System_GetRecordDriverInfo);
}
FMOD_RESULT F_API FMOD_System_GetRecordDriverInfoW   (FMOD_SYSTEM *system, int id, short *name, int namelen, FMOD_GUID *guid) 
{
    FAKE(System_GetRecordDriverInfoW);
}
FMOD_RESULT F_API FMOD_System_GetRecordDriverCaps    (FMOD_SYSTEM *system, int id, FMOD_CAPS *caps, int *minfrequency, int *maxfrequency) 
{
    FAKE(System_GetRecordDriverCaps);
}
FMOD_RESULT F_API FMOD_System_GetRecordPosition      (FMOD_SYSTEM *system, int id, unsigned int *position) 
{
    FAKE(System_GetRecordPosition);
}
FMOD_RESULT F_API FMOD_System_RecordStart            (FMOD_SYSTEM *system, int id, FMOD_SOUND *sound, FMOD_BOOL loop) 
{
    FAKE(System_RecordStart);
}
FMOD_RESULT F_API FMOD_System_RecordStop             (FMOD_SYSTEM *system, int id) 
{
    FAKE(System_RecordStop);
}
FMOD_RESULT F_API FMOD_System_IsRecording            (FMOD_SYSTEM *system, int id, FMOD_BOOL *recording) 
{
    FAKE(System_IsRecording);
}
