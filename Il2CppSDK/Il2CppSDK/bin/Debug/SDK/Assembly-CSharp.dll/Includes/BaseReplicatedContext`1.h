#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext`1" 

class BaseReplicatedContext1: BaseContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseReplicatedContext`1"));
	}


	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_EntityCommand() {
		return ((T (*)(BaseReplicatedContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ComponentCommand() {
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
	template <typename T = Il2CppString*> T ReadComponent(uintptr_t reader, void* OnDestroy) {
		return ((T (*)(BaseReplicatedContext1*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, reader, OnDestroy);
	}

};

}
