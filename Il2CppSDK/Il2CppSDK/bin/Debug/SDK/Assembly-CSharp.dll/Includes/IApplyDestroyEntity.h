#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyDestroyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyDestroyEntity"));
	}


	template <typename R = ApplyDestroyComponent*> R get_applyDestroy() {
		return ((R (*)(IApplyDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyDestroy() {
		return ((R (*)(IApplyDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyDestroy(float newDelay, bool newInstantly) {
		return ((R (*)(IApplyDestroyEntity*, float, bool))(Il2CppBase() + 0x0))(this, newDelay, newInstantly);
	}
	template <typename R = void> R ReplaceApplyDestroy(float newDelay, bool newInstantly) {
		return ((R (*)(IApplyDestroyEntity*, float, bool))(Il2CppBase() + 0x0))(this, newDelay, newInstantly);
	}
	template <typename R = void> R RemoveApplyDestroy() {
		return ((R (*)(IApplyDestroyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

