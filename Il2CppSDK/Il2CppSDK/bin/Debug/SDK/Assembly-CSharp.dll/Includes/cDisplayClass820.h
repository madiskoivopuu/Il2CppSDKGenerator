#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass820
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass82_0"));
	}

	template <typename T = ItemEntity*> T& deskItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = HUDWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnUpdateDrawb__0(uintptr_t ed) {
		return ((T (*)(cDisplayClass820*, uintptr_t))(Il2CppBase() + 0xEA881C))(this, ed);
	}

};

