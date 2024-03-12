#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext`1" 

class LocationContext: BaseReplicatedContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationContext"));
	}

	template <typename T = void*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = void*> T& _pointIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x179FAD0))(this);
	}
	template <typename T = uintptr_t> T get_EntityCommand() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x179FAD8))(this);
	}
	template <typename T = uintptr_t> T get_ComponentCommand() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x179FAE0))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int32_t id) {
		return ((T (*)(LocationContext*, int32_t))(Il2CppBase() + 0x17A0298))(this, id);
	}
	template <typename T = void*> T GetEntitiesWithPoint(Il2CppString* pointName) {
		return ((T (*)(LocationContext*, Il2CppString*))(Il2CppBase() + 0x17A02FC))(this, pointName);
	}
	template <typename T = uintptr_t> T GetWithPointMode(Il2CppString* pointName, uintptr_t locationMode) {
		return ((T (*)(LocationContext*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x17A0384))(this, pointName, locationMode);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(LocationContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A05E8))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(LocationContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A06F0))(this, reader, entity);
	}
	template <typename T = uintptr_t> T get_avatarEntity() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x17A08E0))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x17A0B54))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(LocationContext*, bool))(Il2CppBase() + 0x17A0B70))(this, value);
	}

};

}
