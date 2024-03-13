#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class MailContext : public ToPlayerReplicatedContext1<MailEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailContext"));
	}

	template <typename T = Il2CppString*> static T& MessageId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Stack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(MailContext*))(Il2CppBase() + 0x1A4C140))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(MailContext*))(Il2CppBase() + 0x1A4C148))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(MailContext*))(Il2CppBase() + 0x1A4C150))(this);
	}
	template <typename T = MailEntity*> T GetEntityWithMessageId(int64_t id) {
		return ((T (*)(MailContext*, int64_t))(Il2CppBase() + 0x1A4C6E4))(this, id);
	}
	template <typename T = HashSet1MailEntity*>*> T GetEntitiesWithStack(Il2CppString* name) {
		return ((T (*)(MailContext*, Il2CppString*))(Il2CppBase() + 0x1A4C7C0))(this, name);
	}
	template <typename T = HashSet1MailEntity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(MailContext*, int64_t))(Il2CppBase() + 0x1A4C880))(this, playerId);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(MailContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1A4C940))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(MailContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1A4CA48))(this, reader, entity);
	}

};

