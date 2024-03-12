#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass360
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass36_0"));
	}

	template <typename T = Il2CppString*> T& currentReward() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T OnShowb__0(uintptr_t r) {
		return ((T (*)(cDisplayClass360*, uintptr_t))(Il2CppBase() + 0x10BBE54))(this, r);
	}

};

}
