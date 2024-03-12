#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioTheme
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioTheme"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MixerGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Shuffle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Fadeout() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MaxPlaybacks() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& CanPlayNext() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& PlayIntervel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Loop() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tracks() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& Preload() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _playbackPointer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& _ticks() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get__playbackPointer() {
		return ((T (*)(AudioTheme*))(Il2CppBase() + 0x1A62240))(this);
	}
	template <typename T = void> T set__playbackPointer(int32_t value) {
		return ((T (*)(AudioTheme*, int32_t))(Il2CppBase() + 0x1A62248))(this, value);
	}
	template <typename T = int64_t> T get__ticks() {
		return ((T (*)(AudioTheme*))(Il2CppBase() + 0x1A62250))(this);
	}
	template <typename T = void> T set__ticks(int64_t value) {
		return ((T (*)(AudioTheme*, int64_t))(Il2CppBase() + 0x1A62258))(this, value);
	}
	template <typename T = Il2CppString*> T GetMixerGroup(Il2CppString* defaultMixerGroup) {
		return ((T (*)(AudioTheme*, Il2CppString*))(Il2CppBase() + 0x1A5EE3C))(this, defaultMixerGroup);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AudioTheme*))(Il2CppBase() + 0x1A5FC3C))(this);
	}
	template <typename T = uintptr_t> T GetRandomTrack() {
		return ((T (*)(AudioTheme*))(Il2CppBase() + 0x1A60644))(this);
	}
	template <typename T = uintptr_t> T GetNextTrack() {
		return ((T (*)(AudioTheme*))(Il2CppBase() + 0x1A5ED10))(this);
	}

};

}
