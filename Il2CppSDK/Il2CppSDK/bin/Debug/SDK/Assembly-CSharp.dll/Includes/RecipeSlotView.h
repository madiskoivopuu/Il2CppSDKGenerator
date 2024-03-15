#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class RecipeSlotView : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeSlotView"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& GrayScaleMaterial() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Bind(Il2CppString* itemName, int32_t needCount, bool isUnlocked, int32_t hasCount, TooltipView* tooltipView) {
		return ((R (*)(RecipeSlotView*, Il2CppString*, int32_t, bool, int32_t, TooltipView*))(Il2CppBase() + 0x139A44C))(this, itemName, needCount, isUnlocked, hasCount, tooltipView);
	}

};

