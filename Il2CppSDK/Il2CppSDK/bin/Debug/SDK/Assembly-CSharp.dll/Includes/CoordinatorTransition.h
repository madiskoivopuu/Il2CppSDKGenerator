#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition.h" 

class CoordinatorTransition : public Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoordinatorTransition"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& TokenKey() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Address() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& NewWorldId() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = int64_t> R get_PlayerId() {
		return ((R (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA1C))(this);
	}
	template <typename R = Il2CppArray<uint8_t>*> R get_TokenKey() {
		return ((R (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA24))(this);
	}
	template <typename R = Il2CppString*> R get_Address() {
		return ((R (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA2C))(this);
	}
	template <typename R = int64_t> R get_NewWorldId() {
		return ((R (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA34))(this);
	}

};

