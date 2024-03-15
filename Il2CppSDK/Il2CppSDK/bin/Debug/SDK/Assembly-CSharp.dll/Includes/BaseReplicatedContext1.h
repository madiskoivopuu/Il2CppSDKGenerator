#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

template <typename TEntity>
class BaseReplicatedContext1 : public BaseContext1<TEntity>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseReplicatedContext`1"));
	}


	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(BaseReplicatedContext1*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(BaseReplicatedContext1*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R ReadEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(BaseReplicatedContext1*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R ReadComponent(uintptr_t reader, Action1TEntity>* OnDestroy) {
		return ((R (*)(BaseReplicatedContext1*, uintptr_t, Action1TEntity>*))(Il2CppBase() + 0x0))(this, reader, OnDestroy);
	}

};

