#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext`2" 

class MagicTriggerContext: NewBlueprintContext2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerContext"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _idManager() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _withBlueprintParentIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _withBlueprintOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(MagicTriggerContext*))(Il2CppBase() + 0x1A30350))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(MagicTriggerContext*, uintptr_t))(Il2CppBase() + 0x1A30358))(this, value);
	}
	template <typename T = int32_t> static T GetTargetId(uintptr_t e, uintptr_t c) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A30368))(0, e, c);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(MagicTriggerContext*))(Il2CppBase() + 0x1A30690))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int32_t id) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A30808))(this, id);
	}
	template <typename T = void*> T GetWithParent(int32_t parentId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A30BB4))(this, parentId);
	}
	template <typename T = uintptr_t> T GetWithBlueprintParent(int32_t parentId, Il2CppString* name) {
		return ((T (*)(MagicTriggerContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A30F60))(this, parentId, name);
	}
	template <typename T = void*> T GetOnTarget(int32_t targetId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A31470))(this, targetId);
	}
	template <typename T = void*> T GetWithBlueprintOnTarget(int32_t targetId, Il2CppString* name) {
		return ((T (*)(MagicTriggerContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3179C))(this, targetId, name);
	}
	template <typename T = uintptr_t> T CreateFromData(uintptr_t magic, uintptr_t data) {
		return ((T (*)(MagicTriggerContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A31A98))(this, magic, data);
	}
	template <typename T = uintptr_t> T CreateOrResetFromMagic(uintptr_t magic, Il2CppString* name) {
		return ((T (*)(MagicTriggerContext*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A31D80))(this, magic, name);
	}
	template <typename T = uintptr_t> T CreateFromMagic(uintptr_t magic, Il2CppString* name, void* id) {
		return ((T (*)(MagicTriggerContext*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1A31B60))(this, magic, name, id);
	}
	template <typename T = bool> T CreateOrResetTriggers(uintptr_t magic) {
		return ((T (*)(MagicTriggerContext*, uintptr_t))(Il2CppBase() + 0x1A323A8))(this, magic);
	}
	template <typename T = bool> T DestroyAllWithParent(int32_t parentId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A324A0))(this, parentId);
	}
	template <typename T = bool> T DestroyAllFromTarget(int32_t targetId) {
		return ((T (*)(MagicTriggerContext*, int32_t))(Il2CppBase() + 0x1A327A0))(this, targetId);
	}

};

}
