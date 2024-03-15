#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChildrenConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChildrenConditionComponent"));
	}

	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& TargetConditions() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChildrenConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1746A00))(this, target);
	}

};

