#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataEntityIndex2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataEntityIndex`2"));
	}

	template <typename T = void*> static T& _emptySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _group() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& _index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _dataComponentIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _toString() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(DataEntityIndex2*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void*> T GetEntities(Il2CppString* dataName) {
		return ((T (*)(DataEntityIndex2*, Il2CppString*))(Il2CppBase() + 0x0))(this, dataName);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnEntityAdded(void* group, uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(DataEntityIndex2*, void*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename T = void> T OnEntityRemoved(void* group, uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(DataEntityIndex2*, void*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEntity(uintptr_t entity, uintptr_t dataEntity) {
		return ((T (*)(DataEntityIndex2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, dataEntity);
	}
	template <typename T = void> T RemoveEntity(uintptr_t entity, uintptr_t dataEntity) {
		return ((T (*)(DataEntityIndex2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, dataEntity);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}

};

}
