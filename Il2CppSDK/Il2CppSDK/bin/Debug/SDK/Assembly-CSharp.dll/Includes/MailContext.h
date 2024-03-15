#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 
#include "MailEntity.h" 

class MailContext : public ToPlayerReplicatedContext1<MailEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailContext"));
	}

	template <typename R = Il2CppString*> static R& MessageId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Stack() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(MailContext*))(Il2CppBase() + 0x1A4C140))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(MailContext*))(Il2CppBase() + 0x1A4C148))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(MailContext*))(Il2CppBase() + 0x1A4C150))(this);
	}
	template <typename R = MailEntity*> R GetEntityWithMessageId(int64_t id) {
		return ((R (*)(MailContext*, int64_t))(Il2CppBase() + 0x1A4C6E4))(this, id);
	}
	 HashSet1MailEntity*>* GetEntitiesWithStack(Il2CppString* name) {
		return ((HashSet1MailEntity*>* (*)(MailContext*, Il2CppString*))(Il2CppBase() + 0x1A4C7C0))(this, name);
	}
	 HashSet1MailEntity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1MailEntity*>* (*)(MailContext*, int64_t))(Il2CppBase() + 0x1A4C880))(this, playerId);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(MailContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1A4C940))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(MailContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1A4CA48))(this, reader, entity);
	}

};

