#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBindEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBindEntity"));
	}


	template <typename R = BindComponent*> R get_bind() {
		return ((R (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBind() {
		return ((R (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBind(EntityId newTarget) {
		return ((R (*)(IBindEntity*, EntityId))(Il2CppBase() + 0x0))(this, newTarget);
	}
	template <typename R = void> R ReplaceBind(EntityId newTarget) {
		return ((R (*)(IBindEntity*, EntityId))(Il2CppBase() + 0x0))(this, newTarget);
	}
	template <typename R = void> R RemoveBind() {
		return ((R (*)(IBindEntity*))(Il2CppBase() + 0x0))(this);
	}

};

