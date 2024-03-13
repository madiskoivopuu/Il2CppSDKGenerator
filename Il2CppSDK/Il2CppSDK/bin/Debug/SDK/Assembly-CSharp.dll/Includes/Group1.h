#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Group1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Group`1"));
	}

	template <typename T = GroupChanged1uintptr_t>*> T& OnEntityAdded() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = GroupChanged1uintptr_t>*> T& OnEntityRemoved() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = GroupUpdated1uintptr_t>*> T& OnEntityUpdated() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = IMatcher1uintptr_t>*> T& _matcher() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = HashSet1uintptr_t>*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _entitiesCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _singleEntityCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _toStringCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T add_OnEntityAdded(GroupChanged1uintptr_t>* value) {
		return ((T (*)(Group1*, GroupChanged1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEntityAdded(GroupChanged1uintptr_t>* value) {
		return ((T (*)(Group1*, GroupChanged1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEntityRemoved(GroupChanged1uintptr_t>* value) {
		return ((T (*)(Group1*, GroupChanged1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEntityRemoved(GroupChanged1uintptr_t>* value) {
		return ((T (*)(Group1*, GroupChanged1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEntityUpdated(GroupUpdated1uintptr_t>* value) {
		return ((T (*)(Group1*, GroupUpdated1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEntityUpdated(GroupUpdated1uintptr_t>* value) {
		return ((T (*)(Group1*, GroupUpdated1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_count() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IMatcher1uintptr_t>*> T get_matcher() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T HandleEntitySilently(uintptr_t entity) {
		return ((T (*)(Group1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T HandleEntity(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Group1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = void> T UpdateEntity(uintptr_t entity, int32_t index, uintptr_t previousComponent, uintptr_t newComponent) {
		return ((T (*)(Group1*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, previousComponent, newComponent);
	}
	template <typename T = void> T RemoveAllEventHandlers() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = GroupChanged1uintptr_t>*> T HandleEntity_1(uintptr_t entity) {
		return ((T (*)(Group1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = bool> T AddEntitySilently(uintptr_t entity) {
		return ((T (*)(Group1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T AddEntity(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Group1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = bool> T RemoveEntitySilently(uintptr_t entity) {
		return ((T (*)(Group1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T RemoveEntity(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Group1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = bool> T ContainsEntity(uintptr_t entity) {
		return ((T (*)(Group1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEntities() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEntities_1(Il2CppList<uintptr_t>* buffer) {
		return ((T (*)(Group1*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, buffer);
	}
	template <typename T = IEnumerable1uintptr_t>*> T AsEnumerable() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Enumeratoruintptr_t>*> T GetEnumerator() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSingleEntity() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}

};

