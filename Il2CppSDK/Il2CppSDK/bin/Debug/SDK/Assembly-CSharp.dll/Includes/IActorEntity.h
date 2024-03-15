#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActorEntity"));
	}


	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(IActorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(IActorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(IActorEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(IActorEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(IActorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

