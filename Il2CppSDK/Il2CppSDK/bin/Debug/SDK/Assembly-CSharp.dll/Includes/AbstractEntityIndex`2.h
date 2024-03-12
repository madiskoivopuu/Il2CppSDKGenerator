#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AbstractEntityIndex2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractEntityIndex`2"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _group() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _getKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _getKeys() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _tryGetKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _tryGetKeys() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _isSingleKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _isTryGetKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(AbstractEntityIndex2*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T IndexEntities(void* group) {
		return ((T (*)(AbstractEntityIndex2*, void*))(Il2CppBase() + 0x0))(this, group);
	}
	template <typename T = void> T OnEntityAdded(void* group, uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(AbstractEntityIndex2*, void*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename T = void> T OnEntityRemoved(void* group, uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(AbstractEntityIndex2*, void*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename T = void> T AddEntity(uintptr_t key, uintptr_t entity) {
		return ((T (*)(AbstractEntityIndex2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, entity);
	}
	template <typename T = void> T RemoveEntity(uintptr_t key, uintptr_t entity) {
		return ((T (*)(AbstractEntityIndex2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, entity);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}

};

}
