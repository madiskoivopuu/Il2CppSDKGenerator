#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartProgressView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartProgressView"));
	}

	template <typename R = uintptr_t> R& _levelText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _resourceViews() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& DistrictLevel() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = int32_t> R get_DistrictLevel() {
		return ((R (*)(CartProgressView*))(Il2CppBase() + 0x13E7A9C))(this);
	}
	template <typename R = void> R set_DistrictLevel(int32_t value) {
		return ((R (*)(CartProgressView*, int32_t))(Il2CppBase() + 0x13E7AA4))(this, value);
	}
	template <typename R = void> R Show(TooltipView* tooltipView, int32_t districtLevel) {
		return ((R (*)(CartProgressView*, TooltipView*, int32_t))(Il2CppBase() + 0x13E7AAC))(this, tooltipView, districtLevel);
	}

};

