#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass190
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass19_0"));
	}

	template <typename R = int32_t> R& n() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = PolyAndCodeUI::VerticalRecyclingSystem*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R RecycleTopToBottomb__0(uintptr_t cell) {
		return ((R (*)(cDisplayClass190*, uintptr_t))(Il2CppBase() + 0x22A5858))(this, cell);
	}

};

