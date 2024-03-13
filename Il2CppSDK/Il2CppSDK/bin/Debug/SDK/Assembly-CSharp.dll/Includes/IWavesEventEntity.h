#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWavesEventEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWavesEventEntity"));
	}


	template <typename T = WavesEventComponent*> T get_wavesEvent() {
		return ((T (*)(IWavesEventEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWavesEvent() {
		return ((T (*)(IWavesEventEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<uintptr_t>* newWaves) {
		return ((T (*)(IWavesEventEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename T = void> T ReplaceWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<uintptr_t>* newWaves) {
		return ((T (*)(IWavesEventEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename T = void> T RemoveWavesEvent() {
		return ((T (*)(IWavesEventEntity*))(Il2CppBase() + 0x0))(this);
	}

};

