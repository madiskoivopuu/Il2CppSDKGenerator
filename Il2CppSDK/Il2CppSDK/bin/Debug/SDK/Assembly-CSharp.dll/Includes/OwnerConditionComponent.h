#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OwnerConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OwnerConditionComponent"));
	}

	template <typename R = bool> R& Present() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OwnerConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11E6898))(this, target);
	}

};

