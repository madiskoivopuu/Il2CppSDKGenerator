#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIFXRarityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFXRarityController"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R SetFXRarity(Rarity* rarity) {
		return ((R (*)(UIFXRarityController*, Rarity*))(Il2CppBase() + 0x102F66C))(this, rarity);
	}

};

