#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicAnimatorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicAnimatorController"));
	}

	template <typename R = uintptr_t> R& _mainObject() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _cyclicObject() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _isCyclicAnimatorKey() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& _cyclicLifetimeAnimatorKey() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& _isCyclicAnimatorKeyHash() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _cyclicLifetimeAnimatorKeyHash() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = bool> R& _isSet() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _isLastSet() {
		return *(R*)((uintptr_t)this + 0x49);
	}

	template <typename R = void> R Start() {
		return ((R (*)(CyclicAnimatorController*))(Il2CppBase() + 0x163FEA0))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(CyclicAnimatorController*))(Il2CppBase() + 0x163FF10))(this);
	}

};

