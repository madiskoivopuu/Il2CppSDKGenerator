#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext2.h" 
#include "ActionEntity.h" 

class ActionContext : public BlueprintContext2<ActionEntity*, ActionEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionContext"));
	}

	template <typename R = ActionDataContext*> R& Data() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 PrimaryEntityIndex2ActionEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2ActionEntity*, int32_t>**)((uintptr_t)this + 0x118);
	}
	 PrimaryEntityIndex2ActionEntity*, int32_t>*& _currentForActorIndex() {
		return *(PrimaryEntityIndex2ActionEntity*, int32_t>**)((uintptr_t)this + 0x120);
	}
	 PrimaryEntityIndex2ActionEntity*, int32_t>*& _moveToTargetForActorIndex() {
		return *(PrimaryEntityIndex2ActionEntity*, int32_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2ActionEntity*, int32_t>*& _actorIndex() {
		return *(EntityIndex2ActionEntity*, int32_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2ActionEntity*, int32_t>*& _targetIndex() {
		return *(EntityIndex2ActionEntity*, int32_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2ActionEntity*, int32_t>*& _inventoryItemIndex() {
		return *(EntityIndex2ActionEntity*, int32_t>**)((uintptr_t)this + 0x140);
	}

	template <typename R = ActionDataContext*> R get_Data() {
		return ((R (*)(ActionContext*))(Il2CppBase() + 0x1DBDC24))(this);
	}
	template <typename R = void> R set_Data(ActionDataContext* value) {
		return ((R (*)(ActionContext*, ActionDataContext*))(Il2CppBase() + 0x1DBDC2C))(this, value);
	}
	template <typename R = bool> R IsItemBusy(int32_t slotId) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEA64))(this, slotId);
	}
	template <typename R = ActionEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEC54))(this, id);
	}
	 HashSet1ActionEntity*>* GetEntitiesWithSlotId(int32_t slotId) {
		return ((HashSet1ActionEntity*>* (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEBD8))(this, slotId);
	}
	template <typename R = ActionEntity*> R GetCurrentForActor(int32_t actorId) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBECB8))(this, actorId);
	}
	template <typename R = ActionEntity*> R GetCurrentMoveToTargetForActor(int32_t actorId) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBED1C))(this, actorId);
	}
	 HashSet1ActionEntity*>* GetForActor(int32_t actorId) {
		return ((HashSet1ActionEntity*>* (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBED80))(this, actorId);
	}
	 HashSet1ActionEntity*>* GetWithTarget(int32_t targetId) {
		return ((HashSet1ActionEntity*>* (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEDE4))(this, targetId);
	}
	template <typename R = bool> R HasAliveWithTarget(int32_t targetId) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEE48))(this, targetId);
	}
	template <typename R = void> R RemoveAllActionsFromActor(int32_t actorId) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBEFB4))(this, actorId);
	}
	template <typename R = bool> R IsBlockMoveInventoryForActor(int32_t actorId) {
		return ((R (*)(ActionContext*, int32_t))(Il2CppBase() + 0x1DBF1F8))(this, actorId);
	}

};

