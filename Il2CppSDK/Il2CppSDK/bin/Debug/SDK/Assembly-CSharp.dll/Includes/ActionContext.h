#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext2.h" 

class ActionContext : public BlueprintContext2<ActionEntity*, ActionEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionContext"));
	}

	template <typename T = ActionDataContext*> T& Data() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = PrimaryEntityIndex2ActionEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = PrimaryEntityIndex2ActionEntity*, int32_t>*> T& _currentForActorIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = PrimaryEntityIndex2ActionEntity*, int32_t>*> T& _moveToTargetForActorIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2ActionEntity*, int32_t>*> T& _actorIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2ActionEntity*, int32_t>*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2ActionEntity*, int32_t>*> T& _inventoryItemIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = ActionDataContext*> T get_Data() {
		return ((T (*)(ActionContext*))(Il2CppBase() + 0x1DBDC24))(this);
	}
	template <typename T = void> T set_Data(ActionDataContext* value) {
		return ((T (*)(ActionContext*, ActionDataContext*))(Il2CppBase() + 0x1DBDC2C))(this, value);
	}
	template <typename T = bool> T IsItemBusy(int32_t slotId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEA64))(this, slotId);
	}
	template <typename T = ActionEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEC54))(this, id);
	}
	template <typename T = HashSet1ActionEntity*>*> T GetEntitiesWithSlotId(int32_t slotId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEBD8))(this, slotId);
	}
	template <typename T = ActionEntity*> T GetCurrentForActor(int32_t actorId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBECB8))(this, actorId);
	}
	template <typename T = ActionEntity*> T GetCurrentMoveToTargetForActor(int32_t actorId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBED1C))(this, actorId);
	}
	template <typename T = HashSet1ActionEntity*>*> T GetForActor(int32_t actorId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBED80))(this, actorId);
	}
	template <typename T = HashSet1ActionEntity*>*> T GetWithTarget(int32_t targetId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEDE4))(this, targetId);
	}
	template <typename T = bool> T HasAliveWithTarget(int32_t targetId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEE48))(this, targetId);
	}
	template <typename T = void> T RemoveAllActionsFromActor(int32_t actorId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEFB4))(this, actorId);
	}
	template <typename T = bool> T IsBlockMoveInventoryForActor(int32_t actorId) {
		return ((T (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBF1F8))(this, actorId);
	}

};

