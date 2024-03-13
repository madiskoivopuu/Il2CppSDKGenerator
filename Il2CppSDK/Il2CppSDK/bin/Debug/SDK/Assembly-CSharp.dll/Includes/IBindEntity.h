#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBindEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBindEntity"));
	}


	template <typename T = BindComponent*> T get_bind() {
		return ((T (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBind() {
		return ((T (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBind(EntityId* newTarget) {
		return ((T (*)(IBindEntity*, EntityId*))(Il2CppBase() + 0x0))(this, newTarget);
	}
	template <typename T = void> T ReplaceBind(EntityId* newTarget) {
		return ((T (*)(IBindEntity*, EntityId*))(Il2CppBase() + 0x0))(this, newTarget);
	}
	template <typename T = void> T RemoveBind() {
		return ((T (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}

};

