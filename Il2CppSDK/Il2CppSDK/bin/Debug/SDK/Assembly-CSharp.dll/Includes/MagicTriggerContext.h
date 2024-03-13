#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 

class MagicTriggerContext : public NewBlueprintContext2<MagicTriggerEntity*, MagicTriggerDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerContext"));
	}

	template <typename T = MagicTriggerDataContext*> T& Data() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = IIdManager*> T& _idManager() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = PrimaryEntityIndex2MagicTriggerEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2MagicTriggerEntity*, int32_t>*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = PrimaryEntityIndex2MagicTriggerEntity*, IntString*>*> T& _withBlueprintParentIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2MagicTriggerEntity*, int32_t>*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2MagicTriggerEntity*, IntString*>*> T& _withBlueprintOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = MagicTriggerDataContext*> T get_Data() {
		return ((T (*)(MagicTriggerContext*))(Il2CppBase() + 0x1A30350))(this);
	}
	template <typename T = void> T set_Data(MagicTriggerDataContext* value) {
		return ((T (*)(MagicTriggerContext*, MagicTriggerDataContext*))(Il2CppBase() + 0x1A30358))(this, value);
	}
	template <typename T = int32_t> static T GetTargetId(MagicTriggerEntity* e, uintptr_t c) {
		return ((T (*)(void *, MagicTriggerEntity*, uintptr_t))(Il2CppBase() + 0x1A30368))(0, e, c);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(MagicTriggerContext*))(Il2CppBase() + 0x1A30690))(this);
	}
	template <typename T = MagicTriggerEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A30808))(this, id);
	}
	template <typename T = HashSet1MagicTriggerEntity*>*> T GetWithParent(int32_t parentId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A30BB4))(this, parentId);
	}
	template <typename T = MagicTriggerEntity*> T GetWithBlueprintParent(int32_t parentId, Il2CppString* name) {
		return ((T (*)(MagicTriggerContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A30F60))(this, parentId, name);
	}
	template <typename T = HashSet1MagicTriggerEntity*>*> T GetOnTarget(int32_t targetId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A31470))(this, targetId);
	}
	template <typename T = HashSet1MagicTriggerEntity*>*> T GetWithBlueprintOnTarget(int32_t targetId, Il2CppString* name) {
		return ((T (*)(MagicTriggerContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3179C))(this, targetId, name);
	}
	template <typename T = MagicTriggerEntity*> T CreateFromData(MagicEntity* magic, CreateMagicTriggerData* data) {
		return ((T (*)(MagicTriggerContext*, MagicEntity*, CreateMagicTriggerData*))(Il2CppBase() + 0x1A31A98))(this, magic, data);
	}
	template <typename T = MagicTriggerEntity*> T CreateOrResetFromMagic(MagicEntity* magic, Il2CppString* name) {
		return ((T (*)(MagicTriggerContext*, MagicEntity*, Il2CppString*))(Il2CppBase() + 0x1A31D80))(this, magic, name);
	}
	template <typename T = MagicTriggerEntity*> T CreateFromMagic(MagicEntity* magic, Il2CppString* name, Nullable1int32_t>* id) {
		return ((T (*)(MagicTriggerContext*, MagicEntity*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x1A31B60))(this, magic, name, id);
	}
	template <typename T = bool> T CreateOrResetTriggers(MagicEntity* magic) {
		return ((T (*)(MagicTriggerContext*, MagicEntity*))(Il2CppBase() + 0x1A323A8))(this, magic);
	}
	template <typename T = bool> T DestroyAllWithParent(int32_t parentId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A324A0))(this, parentId);
	}
	template <typename T = bool> T DestroyAllFromTarget(int32_t targetId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A327A0))(this, targetId);
	}

};

