#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActorEntity"));
	}


	template <typename T = uintptr_t> T get_actor() {
		return ((T (*)(IActorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(IActorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(IActorEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(IActorEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(IActorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
