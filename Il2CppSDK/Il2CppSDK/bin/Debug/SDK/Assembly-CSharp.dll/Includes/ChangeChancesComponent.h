#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeChancesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeChancesComponent"));
	}

	 Il2CppDictionary<Il2CppString*, Item>*& Data() {
		return *(Il2CppDictionary<Il2CppString*, Item>**)((uintptr_t)this + 0x10);
	}

	template <typename R = float> R GetValue(Il2CppString* name, float baseValue) {
		return ((R (*)(ChangeChancesComponent*, Il2CppString*, float))(Il2CppBase() + 0x13E9F78))(this, name, baseValue);
	}
	template <typename R = float> R GetValue_1(BaseChanceComponent* chanceComponent) {
		return ((R (*)(ChangeChancesComponent*, BaseChanceComponent*))(Il2CppBase() + 0x13EA060))(this, chanceComponent);
	}

};

