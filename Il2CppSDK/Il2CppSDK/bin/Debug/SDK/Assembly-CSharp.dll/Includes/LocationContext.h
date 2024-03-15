#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "LocationEntity.h" 

class LocationContext : public BaseReplicatedContext1<LocationEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationContext"));
	}

	 PrimaryEntityIndex2LocationEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2LocationEntity*, int32_t>**)((uintptr_t)this + 0xF8);
	}
	 EntityIndex2LocationEntity*, Il2CppString*>*& _pointIndex() {
		return *(EntityIndex2LocationEntity*, Il2CppString*>**)((uintptr_t)this + 0x100);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(LocationContext*))(Il2CppBase() + 0x179FAD0))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(LocationContext*))(Il2CppBase() + 0x179FAD8))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(LocationContext*))(Il2CppBase() + 0x179FAE0))(this);
	}
	template <typename R = LocationEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(LocationContext*, int32_t))(Il2CppBase() + 0x17A0298))(this, id);
	}
	 HashSet1LocationEntity*>* GetEntitiesWithPoint(Il2CppString* pointName) {
		return ((HashSet1LocationEntity*>* (*)(LocationContext*, Il2CppString*))(Il2CppBase() + 0x17A02FC))(this, pointName);
	}
	template <typename R = LocationEntity*> R GetWithPointMode(Il2CppString* pointName, LocationMode* locationMode) {
		return ((R (*)(LocationContext*, Il2CppString*, LocationMode*))(Il2CppBase() + 0x17A0384))(this, pointName, locationMode);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(LocationContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A05E8))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(LocationContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A06F0))(this, reader, entity);
	}
	template <typename R = LocationEntity*> R get_avatarEntity() {
		return ((R (*)(LocationContext*))(Il2CppBase() + 0x17A08E0))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(LocationContext*))(Il2CppBase() + 0x17A0B54))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(LocationContext*, bool))(Il2CppBase() + 0x17A0B70))(this, value);
	}

};

