#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartProgressView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartProgressView"));
	}

	template <typename T = uintptr_t> T& _levelText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DistrictLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_DistrictLevel() {
		return ((T (*)(CartProgressView*))(Il2CppBase() + 0x13E7A9C))(this);
	}
	template <typename T = void> T set_DistrictLevel(int32_t value) {
		return ((T (*)(CartProgressView*, int32_t))(Il2CppBase() + 0x13E7AA4))(this, value);
	}
	template <typename T = void> T Show(uintptr_t tooltipView, int32_t districtLevel) {
		return ((T (*)(CartProgressView*, uintptr_t, int32_t))(Il2CppBase() + 0x13E7AAC))(this, tooltipView, districtLevel);
	}

};

}
