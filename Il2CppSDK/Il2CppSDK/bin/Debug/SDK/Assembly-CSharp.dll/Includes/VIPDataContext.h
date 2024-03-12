#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext`1" 

class VIPDataContext: BaseReplicatedContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataContext"));
	}

	template <typename T = Il2CppString*> static T& VIPId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(VIPDataContext*))(Il2CppBase() + 0x15BD7DC))(this);
	}
	template <typename T = uintptr_t> T get_EntityCommand() {
		return ((T (*)(VIPDataContext*))(Il2CppBase() + 0x15BD7E4))(this);
	}
	template <typename T = uintptr_t> T get_ComponentCommand() {
		return ((T (*)(VIPDataContext*))(Il2CppBase() + 0x15BD7EC))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithVipDataId(int64_t id) {
		return ((T (*)(VIPDataContext*, int64_t))(Il2CppBase() + 0x15BDCA0))(this, id);
	}
	template <typename T = uintptr_t> T get_Item(int64_t id) {
		return ((T (*)(VIPDataContext*, int64_t))(Il2CppBase() + 0x15BDD7C))(this, id);
	}
	template <typename T = uintptr_t> T CreateEntityWithId(int64_t id) {
		return ((T (*)(VIPDataContext*, int64_t))(Il2CppBase() + 0x15BDDB8))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(VIPDataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BDF30))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(VIPDataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BE038))(this, reader, entity);
	}

};

}
