#include <stdio.h>
#include "fmodwrapper.h"
#include "fakemodex.h"

// Reverb

FMOD_RESULT F_API FMOD_System_SetReverbProperties    (FMOD_SYSTEM *system, const FMOD_REVERB_PROPERTIES *prop)
{

    FAKE(System_SetReverbProperties);
    // Reverb seems wrong!
    /*
    FMOD1_REVERB_PROPERTIES props1;
    RevebPropTo(prop, &props1);
    return fmodfn.System_SetReverbProperties((FMOD1_SYSTEM*)system, prop->Instance, &props1);
    */
}

FMOD_RESULT F_API FMOD_System_GetReverbProperties    (FMOD_SYSTEM *system, FMOD_REVERB_PROPERTIES *prop)
{
    LOAD(System_GetReverbProperties);
    FMOD1_REVERB_PROPERTIES props1;
    FMOD_RESULT res = fmodfn.System_GetReverbProperties((FMOD1_SYSTEM*)system, prop->Instance, &props1);
    RevebPropFrom(prop, &props1);
    return res;
}

FMOD_RESULT F_API FMOD_System_SetReverbAmbientProperties(FMOD_SYSTEM *system, FMOD_REVERB_PROPERTIES *prop)
{
    FAKE(System_SetReverbAmbientProperties);
    /*
    FMOD1_REVERB_PROPERTIES props1;
    RevebPropTo(prop, &props1);
    return fmodfn.System_SetReverbAmbientProperties((FMOD1_SYSTEM*)system, &props1);
    */
}

FMOD_RESULT F_API FMOD_System_GetReverbAmbientProperties(FMOD_SYSTEM *system, FMOD_REVERB_PROPERTIES *prop)
{
    FAKE(System_GetReverbAmbientProperties);
    /*
    FMOD1_REVERB_PROPERTIES props1;
    FMOD_RESULT res = fmodfn.System_GetReverbAmbientProperties((FMOD1_SYSTEM*)system, &props1);
    RevebPropFrom(prop, &props1);
    return res;
    */
}


// reverb
FMOD_RESULT F_API FMOD_Reverb_Release                (FMOD_REVERB *reverb)
{
    LOAD(Reverb3D_Release);
    return fmodfn.Reverb3D_Release((FMOD1_REVERB3D*)reverb);
}

// manipulation
FMOD_RESULT F_API FMOD_Reverb_Set3DAttributes        (FMOD_REVERB *reverb, const FMOD_VECTOR *position, float mindistance, float maxdistance)
{
    LOAD(Reverb3D_Set3DAttributes);
    return fmodfn.Reverb3D_Set3DAttributes((FMOD1_REVERB3D*)reverb, (const FMOD1_VECTOR*)position, mindistance, maxdistance);
}
FMOD_RESULT F_API FMOD_Reverb_Get3DAttributes        (FMOD_REVERB *reverb, FMOD_VECTOR *position, float *mindistance, float *maxdistance)
{
    LOAD(Reverb3D_Get3DAttributes);
    return fmodfn.Reverb3D_Get3DAttributes((FMOD1_REVERB3D*)reverb, (FMOD1_VECTOR*)position, mindistance, maxdistance);
}
FMOD_RESULT F_API FMOD_Reverb_SetProperties          (FMOD_REVERB *reverb, const FMOD_REVERB_PROPERTIES *properties)
{
    LOAD(Reverb3D_SetProperties);
    // TODO: conversion?
    return fmodfn.Reverb3D_SetProperties((FMOD1_REVERB3D*)reverb, (const FMOD1_REVERB_PROPERTIES*)properties);
}
FMOD_RESULT F_API FMOD_Reverb_GetProperties          (FMOD_REVERB *reverb, FMOD_REVERB_PROPERTIES *properties)
{
    LOAD(Reverb3D_GetProperties);
    // TODO: covnersion?
    return fmodfn.Reverb3D_GetProperties((FMOD1_REVERB3D*)reverb, (FMOD1_REVERB_PROPERTIES*)properties);
}
FMOD_RESULT F_API FMOD_Reverb_SetActive              (FMOD_REVERB *reverb, FMOD_BOOL active)
{
    LOAD(Reverb3D_SetActive);
    return fmodfn.Reverb3D_SetActive((FMOD1_REVERB3D*)reverb, (FMOD1_BOOL)active);
}
FMOD_RESULT F_API FMOD_Reverb_GetActive              (FMOD_REVERB *reverb, FMOD_BOOL *active)
{
    LOAD(Reverb3D_GetActive);
    return fmodfn.Reverb3D_GetActive((FMOD1_REVERB3D*)reverb, (FMOD1_BOOL*)active);
}
