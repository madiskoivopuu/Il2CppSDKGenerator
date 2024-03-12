#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass411
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass41_1"));
	}

	template <typename T = int32_t> T& priorityIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T FillProductsb__4(uintptr_t productView) {
		return ((T (*)(cDisplayClass411*, uintptr_t))(Il2CppBase() + 0xE91E50))(this, productView);
	}
	template <typename T = void> T FillProductsb__5(uintptr_t productView) {
		return ((T (*)(cDisplayClass411*, uintptr_t))(Il2CppBase() + 0xE91E84))(this, productView);
	}
	template <typename T = void> T FillProductsb__6(uintptr_t productView) {
		return ((T (*)(cDisplayClass411*, uintptr_t))(Il2CppBase() + 0xE91EB8))(this, productView);
	}
	template <typename T = void> T FillProductsb__7(uintptr_t productView) {
		return ((T (*)(cDisplayClass411*, uintptr_t))(Il2CppBase() + 0xE91EEC))(this, productView);
	}

};

}
