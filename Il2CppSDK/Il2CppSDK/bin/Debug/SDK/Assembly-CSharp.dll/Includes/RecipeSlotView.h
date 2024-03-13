#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class RecipeSlotView : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeSlotView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& GrayScaleMaterial() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Bind(Il2CppString* itemName, int32_t needCount, bool isUnlocked, int32_t hasCount, TooltipView* tooltipView) {
		return ((T (*)(RecipeSlotView*, Il2CppString*, int32_t, bool, int32_t, TooltipView*))(Il2CppBase() + 0x139A44C))(this, itemName, needCount, isUnlocked, hasCount, tooltipView);
	}

};

