#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class ModifierContext : public Context1<ModifierEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierContext"));
	}

	 PrimaryEntityIndex2ModifierEntity*, int32_t>*& EntityWithId() {
		return *(PrimaryEntityIndex2ModifierEntity*, int32_t>**)((uintptr_t)this + 0xD0);
	}

	 PrimaryEntityIndex2ModifierEntity*, int32_t>* get_EntityWithId() {
		return ((PrimaryEntityIndex2ModifierEntity*, int32_t>* (*)(ModifierContext*))(Il2CppBase() + 0x1D7B57C))(this);
	}
	template <typename R = void> R set_EntityWithId(PrimaryEntityIndex2ModifierEntity*, int32_t>* value) {
		return ((R (*)(ModifierContext*, PrimaryEntityIndex2ModifierEntity*, int32_t>*))(Il2CppBase() + 0x1D7B584))(this, value);
	}
	template <typename R = void> R ModifierContext_OnEntityCreated(uintptr_t context, uintptr_t entity) {
		return ((R (*)(ModifierContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7B9E8))(this, context, entity);
	}
	template <typename R = void> R OnComponentAdded(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((R (*)(ModifierContext*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1D7BA50))(this, entity, index, component);
	}
	template <typename R = void> R OnComponentRemoved(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((R (*)(ModifierContext*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1D7BAC0))(this, entity, index, component);
	}

};

