#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpriteEffectHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteEffectHelper"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RarityIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& FXMat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SpriteEffectHelper*))(Il2CppBase() + 0x1488A14))(this);
	}
	template <typename T = void> T Init(uintptr_t sprite, int32_t rarity) {
		return ((T (*)(SpriteEffectHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x1488B14))(this, sprite, rarity);
	}

};

}
