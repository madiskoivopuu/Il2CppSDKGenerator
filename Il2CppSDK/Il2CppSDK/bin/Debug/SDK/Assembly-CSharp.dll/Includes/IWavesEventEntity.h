#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWavesEventEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWavesEventEntity"));
	}


	template <typename R = WavesEventComponent*> R get_wavesEvent() {
		return ((R (*)(IWavesEventEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWavesEvent() {
		return ((R (*)(IWavesEventEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<Wave*>* newWaves) {
		return ((R (*)(IWavesEventEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Wave*>*))(Il2CppBase() + 0x0))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename R = void> R ReplaceWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<Wave*>* newWaves) {
		return ((R (*)(IWavesEventEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Wave*>*))(Il2CppBase() + 0x0))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename R = void> R RemoveWavesEvent() {
		return ((R (*)(IWavesEventEntity*))(Il2CppBase() + 0x0))(this);
	}

};

