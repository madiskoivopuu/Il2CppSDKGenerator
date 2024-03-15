#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BiomeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BiomeComponent"));
	}

	template <typename R = float> R& WetDry() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& ColdHotGround() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& ColdHotGrass() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Snow() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& BlizzardPower() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& BlizzardVector() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& BlizzardEnable() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& SnowEnable() {
		return *(R*)((uintptr_t)this + 0x35);
	}
	template <typename R = bool> R& RainEnable() {
		return *(R*)((uintptr_t)this + 0x36);
	}
	template <typename R = bool> R& RiftEnable() {
		return *(R*)((uintptr_t)this + 0x37);
	}
	template <typename R = bool> R& FireEnable() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& DeltaWetDry() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& DeltaColdHotGround() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& DeltaColdHotGrass() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& DeltaSnow() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BiomeComponent*, Il2CppObject*))(Il2CppBase() + 0x16BB570))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BiomeComponent*, uintptr_t))(Il2CppBase() + 0x16BB674))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BiomeComponent*, uintptr_t))(Il2CppBase() + 0x16BB7B8))(this, reader);
	}

};

