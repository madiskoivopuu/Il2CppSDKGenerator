#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioTrack"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Volume() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MinDistance() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& MaxDistance() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& Loop() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& Flatness() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = float> R GetVolume() {
		return ((R (*)(AudioTrack*))(Il2CppBase() + 0x1A5EEAC))(this);
	}
	template <typename R = float> R GetMinDistance(float defaultMinDistance) {
		return ((R (*)(AudioTrack*, float))(Il2CppBase() + 0x1A5EE8C))(this, defaultMinDistance);
	}
	template <typename R = float> R GetMaxDistance(float defaultMaxDistance) {
		return ((R (*)(AudioTrack*, float))(Il2CppBase() + 0x1A5EE9C))(this, defaultMaxDistance);
	}
	template <typename R = bool> R GetLoop() {
		return ((R (*)(AudioTrack*))(Il2CppBase() + 0x1A62268))(this);
	}
	template <typename R = float> R GetSpatialBlend(float defaultSpatialBlend) {
		return ((R (*)(AudioTrack*, float))(Il2CppBase() + 0x1A5EE74))(this, defaultSpatialBlend);
	}

};

