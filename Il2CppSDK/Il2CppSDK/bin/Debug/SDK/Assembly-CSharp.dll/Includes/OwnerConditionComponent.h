#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OwnerConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OwnerConditionComponent"));
	}

	template <typename T = bool> T& Present() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OwnerConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11E6898))(this, target);
	}

};

