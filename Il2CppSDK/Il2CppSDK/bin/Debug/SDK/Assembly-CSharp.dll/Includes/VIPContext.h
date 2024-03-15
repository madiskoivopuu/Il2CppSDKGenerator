#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class VIPContext : public ToPlayerReplicatedContext1<VIPEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPContext"));
	}

	template <typename R = Il2CppString*> static R& VipId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& VipTypePlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(VIPContext*))(Il2CppBase() + 0x15BBAD4))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(VIPContext*))(Il2CppBase() + 0x15BBADC))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(VIPContext*))(Il2CppBase() + 0x15BBAE4))(this);
	}
	template <typename R = VIPEntity*> R GetEntityWithVIPId(int64_t id) {
		return ((R (*)(VIPContext*, int64_t))(Il2CppBase() + 0x15BC654))(this, id);
	}
	 HashSet1VIPEntity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1VIPEntity*>* (*)(VIPContext*, int64_t))(Il2CppBase() + 0x15BC730))(this, playerId);
	}
	template <typename R = VIPEntity*> R GetEntityForVipBonusTypeForPlayer(VipBonusType* type, int64_t playerId) {
		return ((R (*)(VIPContext*, VipBonusType*, int64_t))(Il2CppBase() + 0x15BC7F0))(this, type, playerId);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(VIPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BC900))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(VIPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15BCA08))(this, reader, entity);
	}

};

