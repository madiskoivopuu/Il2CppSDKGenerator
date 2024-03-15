#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DefaultArmingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefaultArmingComponent"));
	}

	template <typename R = Il2CppString*> R& Weapon() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Face() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Hair() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Beard() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& HairColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& SkinColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Clothes() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& CostumeHead() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& CostumeChest() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& CostumeLegs() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& Banner() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& Corpse() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DefaultArmingComponent*, Il2CppObject*))(Il2CppBase() + 0xEB7290))(this, target);
	}

};

