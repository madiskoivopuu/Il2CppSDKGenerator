#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeChancesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeChancesComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T GetValue(Il2CppString* name, float baseValue) {
		return ((T (*)(ChangeChancesComponent*, Il2CppString*, float))(Il2CppBase() + 0x13E9F78))(this, name, baseValue);
	}
	template <typename T = float> T GetValue_1(uintptr_t chanceComponent) {
		return ((T (*)(ChangeChancesComponent*, uintptr_t))(Il2CppBase() + 0x13EA060))(this, chanceComponent);
	}

};

}
