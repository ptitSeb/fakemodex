#include "fmodwrapper.h"
#include "fakemodex.h"

// Globals memory functions
FMOD_RESULT F_API FMOD_Memory_Initialize           (void *poolmem, int poollen, FMOD_MEMORY_ALLOCCALLBACK useralloc, FMOD_MEMORY_REALLOCCALLBACK userrealloc, FMOD_MEMORY_FREECALLBACK userfree, FMOD_MEMORY_TYPE memtypeflags)
{
    LOAD(Memory_Initialize);
    return fmodfn.Memory_Initialize(poolmem, poollen, useralloc, userrealloc, userfree, memtypeflags);
}

FMOD_RESULT F_API FMOD_Memory_GetStats             (int *currentalloced, int *maxalloced, FMOD_BOOL blocking)
{
    LOAD(Memory_GetStats);
    return fmodfn.Memory_GetStats(currentalloced, maxalloced, blocking);
}
FMOD_RESULT F_API FMOD_Debug_SetLevel              (FMOD_DEBUGLEVEL level)
{
    //faked
    fmodfn.dbg_level = level;
    return FMOD_OK;
}
FMOD_RESULT F_API FMOD_Debug_GetLevel              (FMOD_DEBUGLEVEL *level)
{
    //faked
    *level = fmodfn.dbg_level;
    return FMOD_OK;
}
FMOD_RESULT F_API FMOD_File_SetDiskBusy            (int busy)
{
    LOAD(File_SetDiskBusy);
    return fmodfn.File_SetDiskBusy(busy);
}
FMOD_RESULT F_API FMOD_File_GetDiskBusy            (int *busy)
{
    LOAD(File_GetDiskBusy);
    return fmodfn.File_GetDiskBusy(busy);
}
