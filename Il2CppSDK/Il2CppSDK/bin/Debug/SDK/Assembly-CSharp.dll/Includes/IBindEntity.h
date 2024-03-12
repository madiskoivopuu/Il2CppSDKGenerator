#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBindEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBindEntity"));
	}


	template <typename T = uintptr_t> T get_bind() {
		return ((T (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBind() {
		return ((T (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBind(uintptr_t newTarget) {
		return ((T (*)(IBindEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newTarget);
	}
	template <typename T = void> T ReplaceBind(uintptr_t newTarget) {
		return ((T (*)(IBindEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newTarget);
	}
	template <typename T = void> T RemoveBind() {
		return ((T (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
