#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "VIPDataEntity.h" 

class VIPDataContext : public BaseReplicatedContext1<VIPDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataContext"));
	}

	template <typename R = Il2CppString*> static R& VIPId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(VIPDataContext*))(Il2CppBase() + 0x15BD7DC))(this);
	}
	template <typename R = Commands> R get_EntityCommand() {
		return ((R (*)(VIPDataContext*))(Il2CppBase() + 0x15BD7E4))(this);
	}
	template <typename R = Commands> R get_ComponentCommand() {
		return ((R (*)(VIPDataContext*))(Il2CppBase() + 0x15BD7EC))(this);
	}
	template <typename R = VIPDataEntity*> R GetEntityWithVipDataId(int64_t id) {
		return ((R (*)(VIPDataContext*, int64_t))(Il2CppBase() + 0x15BDCA0))(this, id);
	}
	template <typename R = VIPDataEntity*> R get_Item(int64_t id) {
		return ((R (*)(VIPDataContext*, int64_t))(Il2CppBase() + 0x15BDD7C))(this, id);
	}
	template <typename R = VIPDataEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(VIPDataContext*, int64_t))(Il2CppBase() + 0x15BDDB8))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(VIPDataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BDF30))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(VIPDataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BE038))(this, reader, entity);
	}

};

