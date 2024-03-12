#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyDestroyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyDestroyEntity"));
	}


	template <typename T = uintptr_t> T get_applyDestroy() {
		return ((T (*)(IApplyDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyDestroy() {
		return ((T (*)(IApplyDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyDestroy(float newDelay, bool newInstantly) {
		return ((T (*)(IApplyDestroyEntity*, float, bool))(Il2CppBase() + 0x0))(this, newDelay, newInstantly);
	}
	template <typename T = void> T ReplaceApplyDestroy(float newDelay, bool newInstantly) {
		return ((T (*)(IApplyDestroyEntity*, float, bool))(Il2CppBase() + 0x0))(this, newDelay, newInstantly);
	}
	template <typename T = void> T RemoveApplyDestroy() {
		return ((T (*)(IApplyDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
