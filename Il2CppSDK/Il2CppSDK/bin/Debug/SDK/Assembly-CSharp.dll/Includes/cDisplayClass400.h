#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass400
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass40_0"));
	}

	template <typename R = StoreProductContentSlotView*> R& item() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R AcquireDicedItemsb__0(Resource r) {
		return ((R (*)(cDisplayClass400*, Resource))(Il2CppBase() + 0x10CD61C))(this, r);
	}

};

