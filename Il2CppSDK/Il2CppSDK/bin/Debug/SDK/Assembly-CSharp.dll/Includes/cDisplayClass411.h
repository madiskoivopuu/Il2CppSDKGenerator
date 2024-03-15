#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass411
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass41_1"));
	}

	template <typename R = int32_t> R& priorityIndex() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass410*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R FillProductsb__4(CustomStoreProductView* productView) {
		return ((R (*)(cDisplayClass411*, CustomStoreProductView*))(Il2CppBase() + 0xE91E50))(this, productView);
	}
	template <typename R = void> R FillProductsb__5(CustomStoreProductView* productView) {
		return ((R (*)(cDisplayClass411*, CustomStoreProductView*))(Il2CppBase() + 0xE91E84))(this, productView);
	}
	template <typename R = void> R FillProductsb__6(CustomStoreProductView* productView) {
		return ((R (*)(cDisplayClass411*, CustomStoreProductView*))(Il2CppBase() + 0xE91EB8))(this, productView);
	}
	template <typename R = void> R FillProductsb__7(CustomStoreProductView* productView) {
		return ((R (*)(cDisplayClass411*, CustomStoreProductView*))(Il2CppBase() + 0xE91EEC))(this, productView);
	}

};

