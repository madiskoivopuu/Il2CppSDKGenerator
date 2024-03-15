#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftBoostComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftBoostComponent"));
	}

	 Il2CppList<ConditionBoost>*& List() {
		return *(Il2CppList<ConditionBoost>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CraftBoostComponent*, Il2CppObject*))(Il2CppBase() + 0x13412F4))(this, target);
	}

};

