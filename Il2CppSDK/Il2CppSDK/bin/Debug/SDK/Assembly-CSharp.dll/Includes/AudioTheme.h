#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioTheme
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioTheme"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& MixerGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Shuffle() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Fadeout() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& MaxPlaybacks() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& CanPlayNext() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& PlayIntervel() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& Loop() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<AudioTrack*>*> R& Tracks() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& Preload() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> R& _playbackPointer() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int64_t> R& _ticks() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = int32_t> R get__playbackPointer() {
		return ((R (*)(AudioTheme*))(Il2CppBase() + 0x1A62240))(this);
	}
	template <typename R = void> R set__playbackPointer(int32_t value) {
		return ((R (*)(AudioTheme*, int32_t))(Il2CppBase() + 0x1A62248))(this, value);
	}
	template <typename R = int64_t> R get__ticks() {
		return ((R (*)(AudioTheme*))(Il2CppBase() + 0x1A62250))(this);
	}
	template <typename R = void> R set__ticks(int64_t value) {
		return ((R (*)(AudioTheme*, int64_t))(Il2CppBase() + 0x1A62258))(this, value);
	}
	template <typename R = Il2CppString*> R GetMixerGroup(Il2CppString* defaultMixerGroup) {
		return ((R (*)(AudioTheme*, Il2CppString*))(Il2CppBase() + 0x1A5EE3C))(this, defaultMixerGroup);
	}
	template <typename R = void> R Init() {
		return ((R (*)(AudioTheme*))(Il2CppBase() + 0x1A5FC3C))(this);
	}
	template <typename R = AudioTrack*> R GetRandomTrack() {
		return ((R (*)(AudioTheme*))(Il2CppBase() + 0x1A60644))(this);
	}
	template <typename R = AudioTrack*> R GetNextTrack() {
		return ((R (*)(AudioTheme*))(Il2CppBase() + 0x1A5ED10))(this);
	}

};

