#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIFXRarityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFXRarityController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetFXRarity(Rarity* rarity) {
		return ((T (*)(UIFXRarityController*, Rarity*))(Il2CppBase() + 0x102F66C))(this, rarity);
	}

};

