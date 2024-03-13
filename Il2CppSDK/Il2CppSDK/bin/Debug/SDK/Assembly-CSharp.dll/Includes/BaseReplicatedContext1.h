#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

class BaseReplicatedContext1 : public BaseContext1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseReplicatedContext`1"));
	}


	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(BaseReplicatedContext1*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(BaseReplicatedContext1*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T ReadEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(BaseReplicatedContext1*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T ReadComponent(uintptr_t reader, Action1uintptr_t>* OnDestroy) {
		return ((T (*)(BaseReplicatedContext1*, uintptr_t, Action1uintptr_t>*))(Il2CppBase() + 0x0))(this, reader, OnDestroy);
	}

};

