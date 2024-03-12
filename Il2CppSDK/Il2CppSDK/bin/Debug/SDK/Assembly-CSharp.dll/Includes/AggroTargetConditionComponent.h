#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggroTargetConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AggroTargetConditionComponent"));
	}

	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TargetConditions() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AggroTargetConditionComponent*, uintptr_t))(Il2CppBase() + 0x129C05C))(this, target);
	}

};

}
