#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftBoostComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftBoostComponent"));
	}

	template <typename T = Il2CppList<ConditionBoost*>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CraftBoostComponent*, Il2CppObject*))(Il2CppBase() + 0x13412F4))(this, target);
	}

};

