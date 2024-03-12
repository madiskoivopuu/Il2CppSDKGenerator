#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext`1" 

class InviteContext: BaseReplicatedContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Player() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Reverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Income() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Outcome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(InviteContext*))(Il2CppBase() + 0x124460C))(this);
	}
	template <typename T = uintptr_t> T get_EntityCommand() {
		return ((T (*)(InviteContext*))(Il2CppBase() + 0x1244614))(this);
	}
	template <typename T = uintptr_t> T get_ComponentCommand() {
		return ((T (*)(InviteContext*))(Il2CppBase() + 0x124461C))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int64_t id) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245894))(this, id);
	}
	template <typename T = void*> T GetEntitiesWithFromPlayerId(int64_t fromPlayerId) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245970))(this, fromPlayerId);
	}
	template <typename T = uintptr_t> T GetEntityWithFromPlayerIdInCell(int64_t fromPlayerId, unsigned char cellId) {
		return ((T (*)(InviteContext*, int64_t, unsigned char))(Il2CppBase() + 0x1245A30))(this, fromPlayerId, cellId);
	}
	template <typename T = uintptr_t> T GetReverseEntity(int64_t toPlayerId) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245B40))(this, toPlayerId);
	}
	template <typename T = void*> T GetIncomeEntities(int64_t toPlayerId) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245C1C))(this, toPlayerId);
	}
	template <typename T = void*> T GetOutcomeEntities(int64_t fromPlayerId) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245CDC))(this, fromPlayerId);
	}
	template <typename T = uintptr_t> T get_Item(int64_t id) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245D9C))(this, id);
	}
	template <typename T = uintptr_t> T CreateEntityWithId(int64_t id) {
		return ((T (*)(InviteContext*, int64_t))(Il2CppBase() + 0x1245DD8))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(InviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1245F50))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(InviteContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1246058))(this, reader, entity);
	}

};

}
