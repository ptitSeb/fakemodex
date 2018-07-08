#include "fmodwrapper.h"
#include "fakemodex.h"

FMOD_RESULT F_API FMOD_System_CreateGeometry         (FMOD_SYSTEM *system, int maxpolygons, int maxvertices, FMOD_GEOMETRY **geometry)
{
    LOAD(System_CreateGeometry);
    return fmodfn.System_CreateGeometry((FMOD1_SYSTEM*)system, maxpolygons, maxvertices, (FMOD1_GEOMETRY**)geometry);
}

FMOD_RESULT F_API FMOD_System_SetGeometrySettings    (FMOD_SYSTEM *system, float maxworldsize)
{
    LOAD(System_SetGeometrySettings);
    return fmodfn.System_SetGeometrySettings((FMOD1_SYSTEM*)system, maxworldsize);
}

FMOD_RESULT F_API FMOD_System_GetGeometrySettings    (FMOD_SYSTEM *system, float *maxworldsize)
{
    LOAD(System_GetGeometrySettings);
    return fmodfn.System_GetGeometrySettings((FMOD1_SYSTEM*)system, maxworldsize);
}

FMOD_RESULT F_API FMOD_System_LoadGeometry           (FMOD_SYSTEM *system, const void *data, int datasize, FMOD_GEOMETRY **geometry)
{
    LOAD(System_LoadGeometry);
    return fmodfn.System_LoadGeometry((FMOD1_SYSTEM*)system, data, datasize, (FMOD1_GEOMETRY**)geometry);
}

FMOD_RESULT F_API FMOD_System_GetGeometryOcclusion   (FMOD_SYSTEM *system, const FMOD_VECTOR *listener, const FMOD_VECTOR *source, float *direct, float *reverb)
{
    LOAD(System_GetGeometryOcclusion);
    return fmodfn.System_GetGeometryOcclusion((FMOD1_SYSTEM*)system, (FMOD1_VECTOR*)listener, (FMOD1_VECTOR*)source, direct, reverb);
}


// 3D
FMOD_RESULT F_API FMOD_Channel_Set3DAttributes       (FMOD_CHANNEL *channel, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel)
{
    LOAD(Channel_Set3DAttributes);
    return fmodfn.Channel_Set3DAttributes((FMOD1_CHANNEL*)channel, (FMOD1_VECTOR*)pos, (FMOD1_VECTOR*)vel, NULL);
}
FMOD_RESULT F_API FMOD_Channel_Get3DAttributes       (FMOD_CHANNEL *channel, FMOD_VECTOR *pos, FMOD_VECTOR *vel)
{
    LOAD(Channel_Get3DAttributes);
    FMOD1_VECTOR dummy;
    return fmodfn.Channel_Get3DAttributes((FMOD1_CHANNEL*)channel, (FMOD1_VECTOR*)pos, (FMOD1_VECTOR*)vel, &dummy);
}
FMOD_RESULT F_API FMOD_Channel_Set3DMinMaxDistance   (FMOD_CHANNEL *channel, float mindistance, float maxdistance)
{
    LOAD(Channel_Set3DMinMaxDistance);
    return fmodfn.Channel_Set3DMinMaxDistance((FMOD1_CHANNEL*)channel, mindistance, maxdistance);
}
FMOD_RESULT F_API FMOD_Channel_Get3DMinMaxDistance   (FMOD_CHANNEL *channel, float *mindistance, float *maxdistance)
{
    LOAD(Channel_Get3DMinMaxDistance);
    return fmodfn.Channel_Get3DMinMaxDistance((FMOD1_CHANNEL*)channel, mindistance, maxdistance);
}
FMOD_RESULT F_API FMOD_Channel_Set3DConeSettings     (FMOD_CHANNEL *channel, float insideconeangle, float outsideconeangle, float outsidevolume)
{
    LOAD(Channel_Set3DConeSettings);
    return fmodfn.Channel_Set3DConeSettings((FMOD1_CHANNEL*)channel, insideconeangle, outsideconeangle, outsidevolume);
}
FMOD_RESULT F_API FMOD_Channel_Get3DConeSettings     (FMOD_CHANNEL *channel, float *insideconeangle, float *outsideconeangle, float *outsidevolume)
{
    LOAD(Channel_Get3DConeSettings);
    return fmodfn.Channel_Get3DConeSettings((FMOD1_CHANNEL*)channel, insideconeangle, outsideconeangle, outsidevolume);
}
FMOD_RESULT F_API FMOD_Channel_Set3DConeOrientation  (FMOD_CHANNEL *channel, FMOD_VECTOR *orientation)
{
    LOAD(Channel_Set3DConeOrientation);
    return fmodfn.Channel_Set3DConeOrientation((FMOD1_CHANNEL*)channel, (FMOD1_VECTOR*)orientation);
}
FMOD_RESULT F_API FMOD_Channel_Get3DConeOrientation  (FMOD_CHANNEL *channel, FMOD_VECTOR *orientation)
{
    LOAD(Channel_Get3DConeOrientation);
    return fmodfn.Channel_Get3DConeOrientation((FMOD1_CHANNEL*)channel, (FMOD1_VECTOR*)orientation);
}
FMOD_RESULT F_API FMOD_Channel_Set3DCustomRolloff    (FMOD_CHANNEL *channel, FMOD_VECTOR *points, int numpoints)
{
    LOAD(Channel_Set3DCustomRolloff);
    return fmodfn.Channel_Set3DCustomRolloff((FMOD1_CHANNEL*)channel, (FMOD1_VECTOR*)points, numpoints);
}
FMOD_RESULT F_API FMOD_Channel_Get3DCustomRolloff    (FMOD_CHANNEL *channel, FMOD_VECTOR **points, int *numpoints)
{
    LOAD(Channel_Get3DCustomRolloff);
    return fmodfn.Channel_Get3DCustomRolloff((FMOD1_CHANNEL*)channel, (FMOD1_VECTOR**)points, numpoints);
}
FMOD_RESULT F_API FMOD_Channel_Set3DOcclusion        (FMOD_CHANNEL *channel, float directocclusion, float reverbocclusion)
{
    LOAD(Channel_Set3DOcclusion);
    return fmodfn.Channel_Set3DOcclusion((FMOD1_CHANNEL*)channel, directocclusion, reverbocclusion);
}
FMOD_RESULT F_API FMOD_Channel_Get3DOcclusion        (FMOD_CHANNEL *channel, float *directocclusion, float *reverbocclusion)
{
    LOAD(Channel_Get3DOcclusion);
    return fmodfn.Channel_Get3DOcclusion((FMOD1_CHANNEL*)channel, directocclusion, reverbocclusion);
}
FMOD_RESULT F_API FMOD_Channel_Set3DSpread           (FMOD_CHANNEL *channel, float angle)
{
    LOAD(Channel_Set3DSpread);
    return fmodfn.Channel_Set3DSpread((FMOD1_CHANNEL*)channel, angle);
}
FMOD_RESULT F_API FMOD_Channel_Get3DSpread           (FMOD_CHANNEL *channel, float *angle)
{
    LOAD(Channel_Get3DSpread);
    return fmodfn.Channel_Get3DSpread((FMOD1_CHANNEL*)channel, angle);
}
FMOD_RESULT F_API FMOD_Channel_Set3DPanLevel         (FMOD_CHANNEL *channel, float level)
{
    FAKE(Channel_Set3DPanLevel);
    /*LOAD(Channel_Set3DPanLevel);
    return fmodfn.Channel_Set3DPanLevel((FMOD1_CHANNEL*)channel, level);*/
}
FMOD_RESULT F_API FMOD_Channel_Get3DPanLevel         (FMOD_CHANNEL *channel, float *level)
{
    FAKE(Channel_Get3DPanLevel);
    /*LOAD(Channel_Get3DPanLevel);
    return fmodfn.Channel_Get3DPanLevel((FMOD1_CHANNEL*)channel, level);*/
}
FMOD_RESULT F_API FMOD_Channel_Set3DDopplerLevel     (FMOD_CHANNEL *channel, float level)
{
    LOAD(Channel_Set3DDopplerLevel);
    return fmodfn.Channel_Set3DDopplerLevel((FMOD1_CHANNEL*)channel, level);
}
FMOD_RESULT F_API FMOD_Channel_Get3DDopplerLevel     (FMOD_CHANNEL *channel, float *level)
{
    LOAD(Channel_Get3DDopplerLevel);
    return fmodfn.Channel_Get3DDopplerLevel((FMOD1_CHANNEL*)channel, level);
}
FMOD_RESULT F_API FMOD_Channel_Set3DDistanceFilter   (FMOD_CHANNEL *channel, FMOD_BOOL custom, float customLevel, float centerFreq)
{
    LOAD(Channel_Set3DDistanceFilter);
    return fmodfn.Channel_Set3DDistanceFilter((FMOD1_CHANNEL*)channel, custom, customLevel, centerFreq);
}
FMOD_RESULT F_API FMOD_Channel_Get3DDistanceFilter   (FMOD_CHANNEL *channel, FMOD_BOOL *custom, float *customLevel, float *centerFreq)
{
    LOAD(Channel_Get3DDistanceFilter);
    return fmodfn.Channel_Get3DDistanceFilter((FMOD1_CHANNEL*)channel, custom, customLevel, centerFreq);
}

// geometry
FMOD_RESULT F_API FMOD_Geometry_Release              (FMOD_GEOMETRY *geometry)
{
    LOAD(Geometry_Release);
    return fmodfn.Geometry_Release((FMOD1_GEOMETRY*)geometry);
}

// polygon
FMOD_RESULT F_API FMOD_Geometry_AddPolygon           (FMOD_GEOMETRY *geometry, float directocclusion, float reverbocclusion, FMOD_BOOL doublesided, int numvertices, const FMOD_VECTOR *vertices, int *polygonindex)
{
    LOAD(Geometry_AddPolygon);
    return fmodfn.Geometry_AddPolygon((FMOD1_GEOMETRY*)geometry, directocclusion, reverbocclusion, (FMOD1_BOOL)doublesided, numvertices, (const FMOD1_VECTOR*)vertices, polygonindex);
}
FMOD_RESULT F_API FMOD_Geometry_GetNumPolygons       (FMOD_GEOMETRY *geometry, int *numpolygons)
{
    LOAD(Geometry_GetNumPolygons);
    return fmodfn.Geometry_GetNumPolygons((FMOD1_GEOMETRY*)geometry, numpolygons);
}
FMOD_RESULT F_API FMOD_Geometry_GetMaxPolygons       (FMOD_GEOMETRY *geometry, int *maxpolygons, int *maxvertices)
{
    LOAD(Geometry_GetMaxPolygons);
    return fmodfn.Geometry_GetMaxPolygons((FMOD1_GEOMETRY*)geometry, maxpolygons, maxvertices);
}
FMOD_RESULT F_API FMOD_Geometry_GetPolygonNumVertices(FMOD_GEOMETRY *geometry, int index, int *numvertices)
{
    LOAD(Geometry_GetPolygonNumVertices);
    return fmodfn.Geometry_GetPolygonNumVertices((FMOD1_GEOMETRY*)geometry, index, numvertices);
}
FMOD_RESULT F_API FMOD_Geometry_SetPolygonVertex     (FMOD_GEOMETRY *geometry, int index, int vertexindex, const FMOD_VECTOR *vertex)
{
    LOAD(Geometry_SetPolygonVertex);
    return fmodfn.Geometry_SetPolygonVertex((FMOD1_GEOMETRY*)geometry, index, vertexindex, (const FMOD1_VECTOR*)vertex);
}
FMOD_RESULT F_API FMOD_Geometry_GetPolygonVertex     (FMOD_GEOMETRY *geometry, int index, int vertexindex, FMOD_VECTOR *vertex)
{
    LOAD(Geometry_GetPolygonVertex);
    return fmodfn.Geometry_GetPolygonVertex((FMOD1_GEOMETRY*)geometry, index, vertexindex, (FMOD1_VECTOR*)vertex);
}
FMOD_RESULT F_API FMOD_Geometry_SetPolygonAttributes (FMOD_GEOMETRY *geometry, int index, float directocclusion, float reverbocclusion, FMOD_BOOL doublesided)
{
    LOAD(Geometry_SetPolygonAttributes);
    return fmodfn.Geometry_SetPolygonAttributes((FMOD1_GEOMETRY*)geometry, index, directocclusion, reverbocclusion, (FMOD1_BOOL)doublesided);
}
FMOD_RESULT F_API FMOD_Geometry_GetPolygonAttributes (FMOD_GEOMETRY *geometry, int index, float *directocclusion, float *reverbocclusion, FMOD_BOOL *doublesided)
{
    LOAD(Geometry_GetPolygonAttributes);
    return fmodfn.Geometry_GetPolygonAttributes((FMOD1_GEOMETRY*)geometry, index, directocclusion, reverbocclusion, (FMOD1_BOOL*)doublesided);
}

// objects
FMOD_RESULT F_API FMOD_Geometry_SetActive            (FMOD_GEOMETRY *geometry, FMOD_BOOL active)
{
    LOAD(Geometry_SetActive);
    return fmodfn.Geometry_SetActive((FMOD1_GEOMETRY*)geometry, (FMOD1_BOOL)active);
}
FMOD_RESULT F_API FMOD_Geometry_GetActive            (FMOD_GEOMETRY *geometry, FMOD_BOOL *active)
{
    LOAD(Geometry_GetActive);
    return fmodfn.Geometry_GetActive((FMOD1_GEOMETRY*)geometry, (FMOD1_BOOL*)active);
}
FMOD_RESULT F_API FMOD_Geometry_SetRotation          (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *forward, const FMOD_VECTOR *up)
{
    LOAD(Geometry_SetRotation);
    return fmodfn.Geometry_SetRotation((FMOD1_GEOMETRY*)geometry, (const FMOD1_VECTOR*)forward, (const FMOD1_VECTOR*)up);
}
FMOD_RESULT F_API FMOD_Geometry_GetRotation          (FMOD_GEOMETRY *geometry, FMOD_VECTOR *forward, FMOD_VECTOR *up)
{
    LOAD(Geometry_GetRotation);
    return fmodfn.Geometry_GetRotation((FMOD1_GEOMETRY*)geometry, (FMOD1_VECTOR*)forward, (FMOD1_VECTOR*)up);
}
FMOD_RESULT F_API FMOD_Geometry_SetPosition          (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *position)
{
    LOAD(Geometry_SetPosition);
    return fmodfn.Geometry_SetPosition((FMOD1_GEOMETRY*)geometry, (const FMOD1_VECTOR*)position);
}
FMOD_RESULT F_API FMOD_Geometry_GetPosition          (FMOD_GEOMETRY *geometry, FMOD_VECTOR *position)
{
    LOAD(Geometry_GetPosition);
    return fmodfn.Geometry_GetPosition((FMOD1_GEOMETRY*)geometry, (FMOD1_VECTOR*)position);
}
FMOD_RESULT F_API FMOD_Geometry_SetScale             (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *scale)
{
    LOAD(Geometry_SetScale);
    return fmodfn.Geometry_SetScale((FMOD1_GEOMETRY*)geometry, (const FMOD1_VECTOR*)scale);
}
FMOD_RESULT F_API FMOD_Geometry_GetScale             (FMOD_GEOMETRY *geometry, FMOD_VECTOR *scale)
{
    LOAD(Geometry_GetScale);
    return fmodfn.Geometry_GetScale((FMOD1_GEOMETRY*)geometry, (FMOD1_VECTOR*)scale);
}
FMOD_RESULT F_API FMOD_Geometry_Save                 (FMOD_GEOMETRY *geometry, void *data, int *datasize)
{
    LOAD(Geometry_Save);
    return fmodfn.Geometry_Save((FMOD1_GEOMETRY*)geometry, data, datasize);
}
