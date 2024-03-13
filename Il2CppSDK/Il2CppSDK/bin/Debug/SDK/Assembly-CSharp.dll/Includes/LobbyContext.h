#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class LobbyContext : public BaseReplicatedContext1<LobbyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyContext"));
	}

	template <typename T = Il2CppString*> static T& LobbyId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OwnerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(LobbyContext*))(Il2CppBase() + 0x1437DF0))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(LobbyContext*))(Il2CppBase() + 0x1437DF8))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(LobbyContext*))(Il2CppBase() + 0x1437E00))(this);
	}
	template <typename T = LobbyEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(LobbyContext*, int64_t))(Il2CppBase() + 0x143855C))(this, id);
	}
	template <typename T = LobbyEntity*> T GetEntityWithOwnerId(int64_t ownerId) {
		return ((T (*)(LobbyContext*, int64_t))(Il2CppBase() + 0x1438638))(this, ownerId);
	}
	template <typename T = LobbyEntity*> T GetEntityWithPlayerId(int64_t playerId) {
		return ((T (*)(LobbyContext*, int64_t))(Il2CppBase() + 0x1438714))(this, playerId);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(LobbyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1438824))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(LobbyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x143892C))(this, reader, entity);
	}
	template <typename T = LobbyEntity*> T get_avatarEntity() {
		return ((T (*)(LobbyContext*))(Il2CppBase() + 0x1438B1C))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(LobbyContext*))(Il2CppBase() + 0x1438D90))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(LobbyContext*, bool))(Il2CppBase() + 0x1438DAC))(this, value);
	}

};

