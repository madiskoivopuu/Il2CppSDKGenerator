#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "AbstractEntityIndex`2" 

class EntityIndex2: AbstractEntityIndex2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityIndex`2"));
	}

	template <typename T = void*> static T& _emptySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& _index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _toString() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Activate() {
		return ((T (*)(EntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetEntities(uintptr_t key) {
		return ((T (*)(EntityIndex2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(EntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEntity(uintptr_t key, uintptr_t entity) {
		return ((T (*)(EntityIndex2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, entity);
	}
	template <typename T = void> T RemoveEntity(uintptr_t key, uintptr_t entity) {
		return ((T (*)(EntityIndex2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, entity);
	}

};

}
