#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventMarker"));
	}

	template <typename T = Il2CppString*> T& EventName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Activator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& WaveDelay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SpawnDelay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& Repeat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Waves() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
