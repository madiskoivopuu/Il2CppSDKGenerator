#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 

class MagicTriggerContext : public NewBlueprintContext2<MagicTriggerEntity*, MagicTriggerDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerContext"));
	}

	template <typename R = MagicTriggerDataContext*> R& Data() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = IIdManager*> R& _idManager() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	 PrimaryEntityIndex2MagicTriggerEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2MagicTriggerEntity*, int32_t>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2MagicTriggerEntity*, int32_t>*& _parentIndex() {
		return *(EntityIndex2MagicTriggerEntity*, int32_t>**)((uintptr_t)this + 0x128);
	}
	 PrimaryEntityIndex2MagicTriggerEntity*, IntString*>*& _withBlueprintParentIndex() {
		return *(PrimaryEntityIndex2MagicTriggerEntity*, IntString*>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2MagicTriggerEntity*, int32_t>*& _targetIndex() {
		return *(EntityIndex2MagicTriggerEntity*, int32_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2MagicTriggerEntity*, IntString*>*& _withBlueprintOnTargetIndex() {
		return *(EntityIndex2MagicTriggerEntity*, IntString*>**)((uintptr_t)this + 0x140);
	}

	template <typename R = MagicTriggerDataContext*> R get_Data() {
		return ((R (*)(MagicTriggerContext*))(Il2CppBase() + 0x1A30350))(this);
	}
	template <typename R = void> R set_Data(MagicTriggerDataContext* value) {
		return ((R (*)(MagicTriggerContext*, MagicTriggerDataContext*))(Il2CppBase() + 0x1A30358))(this, value);
	}
	template <typename R = int32_t> static R GetTargetId(MagicTriggerEntity* e, uintptr_t c) {
		return ((R (*)(void *, MagicTriggerEntity*, uintptr_t))(Il2CppBase() + 0x1A30368))(0, e, c);
	}
	template <typename R = void> R OnReset() {
		return ((R (*)(MagicTriggerContext*))(Il2CppBase() + 0x1A30690))(this);
	}
	template <typename R = MagicTriggerEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A30808))(this, id);
	}
	 HashSet1MagicTriggerEntity*>* GetWithParent(int32_t parentId) {
		return ((HashSet1MagicTriggerEntity*>* (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A30BB4))(this, parentId);
	}
	template <typename R = MagicTriggerEntity*> R GetWithBlueprintParent(int32_t parentId, Il2CppString* name) {
		return ((R (*)(MagicTriggerContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A30F60))(this, parentId, name);
	}
	 HashSet1MagicTriggerEntity*>* GetOnTarget(int32_t targetId) {
		return ((HashSet1MagicTriggerEntity*>* (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A31470))(this, targetId);
	}
	 HashSet1MagicTriggerEntity*>* GetWithBlueprintOnTarget(int32_t targetId, Il2CppString* name) {
		return ((HashSet1MagicTriggerEntity*>* (*)(MagicTriggerContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3179C))(this, targetId, name);
	}
	template <typename R = MagicTriggerEntity*> R CreateFromData(MagicEntity* magic, CreateMagicTriggerData* data) {
		return ((R (*)(MagicTriggerContext*, MagicEntity*, CreateMagicTriggerData*))(Il2CppBase() + 0x1A31A98))(this, magic, data);
	}
	template <typename R = MagicTriggerEntity*> R CreateOrResetFromMagic(MagicEntity* magic, Il2CppString* name) {
		return ((R (*)(MagicTriggerContext*, MagicEntity*, Il2CppString*))(Il2CppBase() + 0x1A31D80))(this, magic, name);
	}
	template <typename R = MagicTriggerEntity*> R CreateFromMagic(MagicEntity* magic, Il2CppString* name, Nullable1int32_t>* id) {
		return ((R (*)(MagicTriggerContext*, MagicEntity*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x1A31B60))(this, magic, name, id);
	}
	template <typename R = bool> R CreateOrResetTriggers(MagicEntity* magic) {
		return ((R (*)(MagicTriggerContext*, MagicEntity*))(Il2CppBase() + 0x1A323A8))(this, magic);
	}
	template <typename R = bool> R DestroyAllWithParent(int32_t parentId) {
		return ((R (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A324A0))(this, parentId);
	}
	template <typename R = bool> R DestroyAllFromTarget(int32_t targetId) {
		return ((R (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A327A0))(this, targetId);
	}

};

