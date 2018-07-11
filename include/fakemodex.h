#ifndef __FAKEMODEX_H_
#define __FAKEMODEX_H_

#include "fmodex/fmod.h"

#undef F_API
#define F_API __attribute__((visibility("default")))

void ExInfoTo(const FMOD_CREATESOUNDEXINFO * exinfo, FMOD1_CREATESOUNDEXINFO * ex1info);
void DspDescriptionTo(const FMOD_DSP_DESCRIPTION * description, FMOD1_DSP_DESCRIPTION * desc1);
void AdvancedSettingsTo(const FMOD_ADVANCEDSETTINGS * settings, FMOD1_ADVANCEDSETTINGS * set1);
void AdvancedSettingsFrom(FMOD_ADVANCEDSETTINGS * settings, const FMOD1_ADVANCEDSETTINGS * set1);
void RevebPropTo(const FMOD_REVERB_PROPERTIES * props, FMOD1_REVERB_PROPERTIES * props1);
void RevebPropFrom(FMOD_REVERB_PROPERTIES * props, const FMOD1_REVERB_PROPERTIES * props1);

FMOD1_INITFLAGS InitFlags(FMOD_INITFLAGS flags);
FMOD1_SOUND_FORMAT SoundFormat(FMOD_SOUND_FORMAT format);
FMOD_SOUND_FORMAT SoundFormatFrom(FMOD1_SOUND_FORMAT format);
FMOD1_SOUND_TYPE SoundType(FMOD_SOUND_TYPE type);
FMOD_SOUND_TYPE SoundTypeFrom(FMOD1_SOUND_TYPE type);
FMOD1_TIMEUNIT TimeUnit(FMOD_TIMEUNIT timeunit);
FMOD_TIMEUNIT TimeUnitFrom(FMOD1_TIMEUNIT timeunit);
FMOD1_MODE Mode(FMOD_MODE mode);
FMOD1_SPEAKER Speaker(FMOD_SPEAKER speaker);
FMOD1_SPEAKERMODE SpeakerMode(FMOD_SPEAKERMODE mode);
FMOD_SPEAKERMODE SpeakerModeFrom(FMOD1_SPEAKERMODE mode);
FMOD1_DSP_TYPE DspType(FMOD_DSP_TYPE type);

#endif //__FAKEMODEX_H_