#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class VIPContext : public ToPlayerReplicatedContext1<VIPEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPContext"));
	}

	template <typename T = Il2CppString*> static T& VipId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VipTypePlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(VIPContext*))(Il2CppBase() + 0x15BBAD4))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(VIPContext*))(Il2CppBase() + 0x15BBADC))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(VIPContext*))(Il2CppBase() + 0x15BBAE4))(this);
	}
	template <typename T = VIPEntity*> T GetEntityWithVIPId(int64_t id) {
		return ((T (*)(VIPContext*, int64_t))(Il2CppBase() + 0x15BC654))(this, id);
	}
	template <typename T = HashSet1VIPEntity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(VIPContext*, int64_t))(Il2CppBase() + 0x15BC730))(this, playerId);
	}
	template <typename T = VIPEntity*> T GetEntityForVipBonusTypeForPlayer(VipBonusType* type, int64_t playerId) {
		return ((T (*)(VIPContext*, VipBonusType*, int64_t))(Il2CppBase() + 0x15BC7F0))(this, type, playerId);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(VIPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BC900))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(VIPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BCA08))(this, reader, entity);
	}

};

