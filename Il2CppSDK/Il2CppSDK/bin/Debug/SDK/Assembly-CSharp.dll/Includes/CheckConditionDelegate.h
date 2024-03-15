#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckConditionDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheckConditionDelegate"));
	}


	template <typename R = bool> R Invoke(ICommonContexts* world, ConditionEntity* condition, uintptr_t args) {
		return ((R (*)(CheckConditionDelegate*, ICommonContexts*, ConditionEntity*, uintptr_t))(Il2CppBase() + 0x11281EC))(this, world, condition, args);
	}
	template <typename R = uintptr_t> R BeginInvoke(ICommonContexts* world, ConditionEntity* condition, uintptr_t args, uintptr_t callback, Il2CppObject* object) {
		return ((R (*)(CheckConditionDelegate*, ICommonContexts*, ConditionEntity*, uintptr_t, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x11285B0))(this, world, condition, args, callback, object);
	}
	template <typename R = bool> R EndInvoke(uintptr_t args, uintptr_t result) {
		return ((R (*)(CheckConditionDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1128654))(this, args, result);
	}

};

