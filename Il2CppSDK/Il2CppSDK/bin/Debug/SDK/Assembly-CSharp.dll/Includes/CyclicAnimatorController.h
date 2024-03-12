#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicAnimatorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicAnimatorController"));
	}

	template <typename T = uintptr_t> T& _mainObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _cyclicObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _isCyclicAnimatorKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _cyclicLifetimeAnimatorKey() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _isCyclicAnimatorKeyHash() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _cyclicLifetimeAnimatorKeyHash() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _isSet() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _isLastSet() {
		return *(T*)((uintptr_t)this + 0x49);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CyclicAnimatorController*))(Il2CppBase() + 0x163FEA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CyclicAnimatorController*))(Il2CppBase() + 0x163FF10))(this);
	}

};

}
