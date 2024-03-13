#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition.h" 

class CoordinatorTransition : public Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoordinatorTransition"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TokenKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Address() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& NewWorldId() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int64_t> T get_PlayerId() {
		return ((T (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA1C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TokenKey() {
		return ((T (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA24))(this);
	}
	template <typename T = Il2CppString*> T get_Address() {
		return ((T (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA2C))(this);
	}
	template <typename T = int64_t> T get_NewWorldId() {
		return ((T (*)(CoordinatorTransition*))(Il2CppBase() + 0x133DA34))(this);
	}

};

