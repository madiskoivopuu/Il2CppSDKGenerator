#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class BaseContext1 : public Context1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseContext`1"));
	}

	template <typename T = int32_t> T& TotalComponents() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ComponentNames() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ComponentTypes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IsClearable() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ComponentKinds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_TotalComponents() {
		return ((T (*)(BaseContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_TotalComponents(int32_t value) {
		return ((T (*)(BaseContext1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ComponentNames() {
		return ((T (*)(BaseContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ComponentNames(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BaseContext1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ComponentTypes() {
		return ((T (*)(BaseContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ComponentTypes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BaseContext1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_ComponentKinds() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T set_ComponentKinds(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = bool> T AddComponent(uintptr_t entity, int32_t componentIndex, uintptr_t component, bool replace) {
		return ((T (*)(BaseContext1*, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, entity, componentIndex, component, replace);
	}
	template <typename T = uintptr_t> T CreateEntityFromBlueprint(EntityBlueprint* entityData) {
		return ((T (*)(BaseContext1*, EntityBlueprint*))(Il2CppBase() + 0x0))(this, entityData);
	}
	template <typename T = void> T DestroyEntities(IGroup1uintptr_t>* group) {
		return ((T (*)(BaseContext1*, IGroup1uintptr_t>*))(Il2CppBase() + 0x0))(this, group);
	}
	template <typename T = void> T DestroyEntities_1(IMatcher1uintptr_t>* matcher) {
		return ((T (*)(BaseContext1*, IMatcher1uintptr_t>*))(Il2CppBase() + 0x0))(this, matcher);
	}
	template <typename T = bool> T DestroyEntities_2(HashSet1uintptr_t>* entities, Predicate1uintptr_t>* predicate) {
		return ((T (*)(BaseContext1*, HashSet1uintptr_t>*, Predicate1uintptr_t>*))(Il2CppBase() + 0x0))(this, entities, predicate);
	}

};

