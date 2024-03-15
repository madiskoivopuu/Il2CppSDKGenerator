#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventMarker"));
	}

	template <typename R = Il2CppString*> R& EventName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Activator() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& WaveDelay() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& SpawnDelay() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& Repeat() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Waves() {
		return *(R*)((uintptr_t)this + 0x38);
	}


};

