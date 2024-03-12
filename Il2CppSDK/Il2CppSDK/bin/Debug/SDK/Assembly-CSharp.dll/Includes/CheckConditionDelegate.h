#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckConditionDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheckConditionDelegate"));
	}


	template <typename T = bool> T Invoke(uintptr_t world, uintptr_t condition, uintptr_t args) {
		return ((T (*)(CheckConditionDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11281EC))(this, world, condition, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t world, uintptr_t condition, uintptr_t args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CheckConditionDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11285B0))(this, world, condition, args, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t args, uintptr_t result) {
		return ((T (*)(CheckConditionDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1128654))(this, args, result);
	}

};

}
