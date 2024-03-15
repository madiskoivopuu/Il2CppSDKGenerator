#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpriteEffectHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteEffectHelper"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& RarityIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& FX() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& FXMat() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& colors() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(SpriteEffectHelper*))(Il2CppBase() + 0x1488A14))(this);
	}
	template <typename R = void> R Init(uintptr_t sprite, int32_t rarity) {
		return ((R (*)(SpriteEffectHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x1488B14))(this, sprite, rarity);
	}

};

