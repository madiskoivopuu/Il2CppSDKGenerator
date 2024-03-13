#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BiomeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BiomeComponent"));
	}

	template <typename T = float> T& WetDry() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ColdHotGround() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ColdHotGrass() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Snow() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& BlizzardPower() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BlizzardVector() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& BlizzardEnable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& SnowEnable() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& RainEnable() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = bool> T& RiftEnable() {
		return *(T*)((uintptr_t)this + 0x37);
	}
	template <typename T = bool> T& FireEnable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& DeltaWetDry() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DeltaColdHotGround() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& DeltaColdHotGrass() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& DeltaSnow() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BiomeComponent*, Il2CppObject*))(Il2CppBase() + 0x16BB570))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BiomeComponent*, uintptr_t))(Il2CppBase() + 0x16BB674))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BiomeComponent*, uintptr_t))(Il2CppBase() + 0x16BB7B8))(this, reader);
	}

};

