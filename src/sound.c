#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_Sound_Release                 (FMOD_SOUND *sound)
{
    LOAD(Sound_Release);
    return fmodfn.Sound_Release((FMOD1_SOUND*)sound);
}

FMOD_RESULT F_API FMOD_Sound_GetSystemObject         (FMOD_SOUND *sound, FMOD_SYSTEM **system)
{
    LOAD(Sound_GetSystemObject);
    return fmodfn.Sound_GetSystemObject((FMOD1_SOUND*)sound, (FMOD1_SYSTEM**)system);
}


FMOD_RESULT F_API FMOD_Sound_Lock                    (FMOD_SOUND *sound, unsigned int offset, unsigned int length, void **ptr1, void **ptr2, unsigned int *len1, unsigned int *len2)
{
    LOAD(Sound_Lock);
    return fmodfn.Sound_Lock((FMOD1_SOUND*)sound, offset, length, ptr1, ptr2, len1, len2);
}
FMOD_RESULT F_API FMOD_Sound_Unlock                  (FMOD_SOUND *sound, void *ptr1, void *ptr2, unsigned int len1, unsigned int len2)
{
    LOAD(Sound_Unlock);
    return fmodfn.Sound_Unlock((FMOD1_SOUND*)sound, ptr1, ptr2, len1, len2);
}
FMOD_RESULT F_API FMOD_Sound_SetDefaults             (FMOD_SOUND *sound, float frequency, float volume, float pan, int priority)
{
    LOAD(Sound_SetDefaults);
    // TODO, handlng default volume and pan ?
    return fmodfn.Sound_SetDefaults((FMOD1_SOUND*)sound, frequency, /*volume, pan, */priority);
}
FMOD_RESULT F_API FMOD_Sound_GetDefaults             (FMOD_SOUND *sound, float *frequency, float *volume, float *pan, int *priority)
{
    LOAD(Sound_GetDefaults);
    *volume = 1.0f;
    *pan = 0.f;
    return fmodfn.Sound_GetDefaults((FMOD1_SOUND*)sound, frequency, /*volume, pan, */priority);
}
FMOD_RESULT F_API FMOD_Sound_SetVariations           (FMOD_SOUND *sound, float frequencyvar, float volumevar, float panvar)
{
    FAKE(Sound_SetVariations);
    /*LOAD(Sound_SetVariations);
    return fmodfn.Sound_SetVariations((FMOD1_SOUND*)sound, frequencyvar, volumevar, panvar);*/
}
FMOD_RESULT F_API FMOD_Sound_GetVariations           (FMOD_SOUND *sound, float *frequencyvar, float *volumevar, float *panvar)
{
    FAKE(Sound_GetVariations);
    /*LOAD(Sound_GetVariations);
    return fmodfn.Sound_GetVariations((FMOD1_SOUND*)sound, frequencyvar, volumevar, panvar);*/
}
FMOD_RESULT F_API FMOD_Sound_Set3DMinMaxDistance     (FMOD_SOUND *sound, float min, float max)
{
    LOAD(Sound_Set3DMinMaxDistance);
    return fmodfn.Sound_Set3DMinMaxDistance((FMOD1_SOUND*)sound, min, max);
}
FMOD_RESULT F_API FMOD_Sound_Get3DMinMaxDistance     (FMOD_SOUND *sound, float *min, float *max)
{
    LOAD(Sound_Get3DMinMaxDistance);
    return fmodfn.Sound_Get3DMinMaxDistance((FMOD1_SOUND*)sound, min, max);
}
FMOD_RESULT F_API FMOD_Sound_Set3DConeSettings       (FMOD_SOUND *sound, float insideconeangle, float outsideconeangle, float outsidevolume)
{
    LOAD(Sound_Set3DConeSettings);
    return fmodfn.Sound_Set3DConeSettings((FMOD1_SOUND*)sound, insideconeangle, outsideconeangle, outsidevolume);
}
FMOD_RESULT F_API FMOD_Sound_Get3DConeSettings       (FMOD_SOUND *sound, float *insideconeangle, float *outsideconeangle, float *outsidevolume)
{
    LOAD(Sound_Get3DConeSettings);
    return fmodfn.Sound_Get3DConeSettings((FMOD1_SOUND*)sound, insideconeangle, outsideconeangle, outsidevolume);
}
FMOD_RESULT F_API FMOD_Sound_Set3DCustomRolloff      (FMOD_SOUND *sound, FMOD_VECTOR *points, int numpoints)
{
    LOAD(Sound_Set3DCustomRolloff);
    return fmodfn.Sound_Set3DCustomRolloff((FMOD1_SOUND*)sound, (FMOD1_VECTOR*)points, numpoints);
}
FMOD_RESULT F_API FMOD_Sound_Get3DCustomRolloff      (FMOD_SOUND *sound, FMOD_VECTOR **points, int *numpoints)
{
    LOAD(Sound_Get3DCustomRolloff);
    return fmodfn.Sound_Get3DCustomRolloff((FMOD1_SOUND*)sound, (FMOD1_VECTOR**)points, numpoints);
}
FMOD_RESULT F_API FMOD_Sound_SetSubSound             (FMOD_SOUND *sound, int index, FMOD_SOUND *subsound)
{
    LOAD(Sound_SetSubSound);
    return fmodfn.Sound_SetSubSound((FMOD1_SOUND*)sound, index, (FMOD1_SOUND*)subsound);
}
FMOD_RESULT F_API FMOD_Sound_GetSubSound             (FMOD_SOUND *sound, int index, FMOD_SOUND **subsound)
{
    LOAD(Sound_GetSubSound);
    return fmodfn.Sound_GetSubSound((FMOD1_SOUND*)sound, index, (FMOD1_SOUND**)subsound);
}
FMOD_RESULT F_API FMOD_Sound_GetSubSoundParent       (FMOD_SOUND *sound, FMOD_SOUND **parentsound)
{
    LOAD(Sound_GetSubSoundParent);
    return fmodfn.Sound_GetSubSoundParent((FMOD1_SOUND*)sound, (FMOD1_SOUND**)parentsound);
}
FMOD_RESULT F_API FMOD_Sound_SetSubSoundSentence     (FMOD_SOUND *sound, int *subsoundlist, int numsubsounds)
{
    FAKE(Sound_SetSubSoundSentence);
    /*LOAD(Sound_SetSubSoundSentence);
    return fmodfn.Sound_SetSubSoundSentence((FMOD1_SOUND*)sound, subsoundlist, numsubsounds);*/
}
FMOD_RESULT F_API FMOD_Sound_GetName                 (FMOD_SOUND *sound, char *name, int namelen)
{
    LOAD(Sound_GetName);
    return fmodfn.Sound_GetName((FMOD1_SOUND*)sound, name, namelen);
}
FMOD_RESULT F_API FMOD_Sound_GetLength               (FMOD_SOUND *sound, unsigned int *length, FMOD_TIMEUNIT lengthtype)
{
    LOAD(Sound_GetLength);
    return fmodfn.Sound_GetLength((FMOD1_SOUND*)sound, length, TimeUnit(lengthtype));
}
FMOD_RESULT F_API FMOD_Sound_GetFormat               (FMOD_SOUND *sound, FMOD_SOUND_TYPE *type, FMOD_SOUND_FORMAT *format, int *channels, int *bits)
{
    //FAKE(Sound_GetFormat);
    LOAD(Sound_GetFormat);
    FMOD1_SOUND_TYPE type1;
    FMOD1_SOUND_FORMAT fmt1;
    FMOD1_RESULT res = fmodfn.Sound_GetFormat((FMOD1_SOUND*)sound, &type1, &fmt1, channels, bits);
    *type = SoundTypeFrom(type1);
    *format = SoundFormatFrom(fmt1);
    return res;
}
FMOD_RESULT F_API FMOD_Sound_GetNumSubSounds         (FMOD_SOUND *sound, int *numsubsounds)
{
    LOAD(Sound_GetNumSubSounds);
    return fmodfn.Sound_GetNumSubSounds((FMOD1_SOUND*)sound, numsubsounds);
}
FMOD_RESULT F_API FMOD_Sound_GetNumTags              (FMOD_SOUND *sound, int *numtags, int *numtagsupdated)
{
    LOAD(Sound_GetNumTags);
    return fmodfn.Sound_GetNumTags((FMOD1_SOUND*)sound, numtags, numtagsupdated);
}
FMOD_RESULT F_API FMOD_Sound_GetTag                  (FMOD_SOUND *sound, const char *name, int index, FMOD_TAG *tag)
{
    LOAD(Sound_GetTag);
    return fmodfn.Sound_GetTag((FMOD1_SOUND*)sound, name, index, (FMOD1_TAG*)tag);
}
FMOD_RESULT F_API FMOD_Sound_GetOpenState            (FMOD_SOUND *sound, FMOD_OPENSTATE *openstate, unsigned int *percentbuffered, FMOD_BOOL *starving, FMOD_BOOL *diskbusy)
{
    LOAD(Sound_GetOpenState);
    return fmodfn.Sound_GetOpenState((FMOD1_SOUND*)sound, (FMOD1_OPENSTATE*)openstate, percentbuffered, (FMOD1_BOOL*)starving, (FMOD1_BOOL*)diskbusy);
}
FMOD_RESULT F_API FMOD_Sound_ReadData                (FMOD_SOUND *sound, void *buffer, unsigned int lenbytes, unsigned int *read)
{
    LOAD(Sound_ReadData);
    return fmodfn.Sound_ReadData((FMOD1_SOUND*)sound, buffer, lenbytes, read);
}
FMOD_RESULT F_API FMOD_Sound_SeekData                (FMOD_SOUND *sound, unsigned int pcm)
{
    LOAD(Sound_SeekData);
    return fmodfn.Sound_SeekData((FMOD1_SOUND*)sound, pcm);
}

FMOD_RESULT F_API FMOD_Sound_SetSoundGroup           (FMOD_SOUND *sound, FMOD_SOUNDGROUP *soundgroup)
{
    LOAD(Sound_SetSoundGroup);
    return fmodfn.Sound_SetSoundGroup((FMOD1_SOUND*)sound, (FMOD1_SOUNDGROUP*)soundgroup);
}
FMOD_RESULT F_API FMOD_Sound_GetSoundGroup           (FMOD_SOUND *sound, FMOD_SOUNDGROUP **soundgroup)
{
    LOAD(Sound_GetSoundGroup);
    return fmodfn.Sound_GetSoundGroup((FMOD1_SOUND*)sound, (FMOD1_SOUNDGROUP**)soundgroup);
}
