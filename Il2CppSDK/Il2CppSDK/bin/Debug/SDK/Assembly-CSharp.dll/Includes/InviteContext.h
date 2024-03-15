#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "InviteEntity.h" 

class InviteContext : public BaseReplicatedContext1<InviteEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Player() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerCell() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Reverse() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Income() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Outcome() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(InviteContext*))(Il2CppBase() + 0x124460C))(this);
	}
	template <typename R = Commands> R get_EntityCommand() {
		return ((R (*)(InviteContext*))(Il2CppBase() + 0x1244614))(this);
	}
	template <typename R = Commands> R get_ComponentCommand() {
		return ((R (*)(InviteContext*))(Il2CppBase() + 0x124461C))(this);
	}
	template <typename R = InviteEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245894))(this, id);
	}
	 HashSet1<InviteEntity*>* GetEntitiesWithFromPlayerId(int64_t fromPlayerId) {
		return ((HashSet1<InviteEntity*>* (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245970))(this, fromPlayerId);
	}
	template <typename R = InviteEntity*> R GetEntityWithFromPlayerIdInCell(int64_t fromPlayerId, uint8_t cellId) {
		return ((R (*)(InviteContext*, int64_t, uint8_t))(Il2CppBase() + 0x1245A30))(this, fromPlayerId, cellId);
	}
	template <typename R = InviteEntity*> R GetReverseEntity(int64_t toPlayerId) {
		return ((R (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245B40))(this, toPlayerId);
	}
	 HashSet1<InviteEntity*>* GetIncomeEntities(int64_t toPlayerId) {
		return ((HashSet1<InviteEntity*>* (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245C1C))(this, toPlayerId);
	}
	 HashSet1<InviteEntity*>* GetOutcomeEntities(int64_t fromPlayerId) {
		return ((HashSet1<InviteEntity*>* (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245CDC))(this, fromPlayerId);
	}
	template <typename R = InviteEntity*> R get_Item(int64_t id) {
		return ((R (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245D9C))(this, id);
	}
	template <typename R = InviteEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245DD8))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(InviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1245F50))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(InviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1246058))(this, reader, entity);
	}

};

