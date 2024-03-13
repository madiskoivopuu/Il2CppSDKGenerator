#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass591
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass59_1"));
	}

	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = cDisplayClass590*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadScoresb__2(bool resolutionRequired) {
		return ((T (*)(cDisplayClass591*, bool))(Il2CppBase() + 0x113F844))(this, resolutionRequired);
	}

};

