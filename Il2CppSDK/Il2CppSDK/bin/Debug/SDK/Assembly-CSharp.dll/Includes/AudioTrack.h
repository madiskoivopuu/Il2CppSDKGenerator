#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioTrack"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Volume() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Loop() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Flatness() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = float> T GetVolume() {
		return ((T (*)(AudioTrack*))(Il2CppBase() + 0x1A5EEAC))(this);
	}
	template <typename T = float> T GetMinDistance(float defaultMinDistance) {
		return ((T (*)(AudioTrack*, float))(Il2CppBase() + 0x1A5EE8C))(this, defaultMinDistance);
	}
	template <typename T = float> T GetMaxDistance(float defaultMaxDistance) {
		return ((T (*)(AudioTrack*, float))(Il2CppBase() + 0x1A5EE9C))(this, defaultMaxDistance);
	}
	template <typename T = bool> T GetLoop() {
		return ((T (*)(AudioTrack*))(Il2CppBase() + 0x1A62268))(this);
	}
	template <typename T = float> T GetSpatialBlend(float defaultSpatialBlend) {
		return ((T (*)(AudioTrack*, float))(Il2CppBase() + 0x1A5EE74))(this, defaultSpatialBlend);
	}

};

}
