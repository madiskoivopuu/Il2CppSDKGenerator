#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class LocationContext : public BaseReplicatedContext1<LocationEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationContext"));
	}

	template <typename T = PrimaryEntityIndex2LocationEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = EntityIndex2LocationEntity*, Il2CppString*>*> T& _pointIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x179FAD0))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x179FAD8))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x179FAE0))(this);
	}
	template <typename T = LocationEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(LocationContext*, int32_t))(Il2CppBase() + 0x17A0298))(this, id);
	}
	template <typename T = HashSet1LocationEntity*>*> T GetEntitiesWithPoint(Il2CppString* pointName) {
		return ((T (*)(LocationContext*, Il2CppString*))(Il2CppBase() + 0x17A02FC))(this, pointName);
	}
	template <typename T = LocationEntity*> T GetWithPointMode(Il2CppString* pointName, LocationMode* locationMode) {
		return ((T (*)(LocationContext*, Il2CppString*, LocationMode*))(Il2CppBase() + 0x17A0384))(this, pointName, locationMode);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(LocationContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A05E8))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(LocationContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A06F0))(this, reader, entity);
	}
	template <typename T = LocationEntity*> T get_avatarEntity() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x17A08E0))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(LocationContext*))(Il2CppBase() + 0x17A0B54))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(LocationContext*, bool))(Il2CppBase() + 0x17A0B70))(this, value);
	}

};

