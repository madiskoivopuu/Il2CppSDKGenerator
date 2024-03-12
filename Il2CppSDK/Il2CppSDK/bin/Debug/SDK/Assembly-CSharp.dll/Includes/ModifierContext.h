#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context`1" 

class ModifierContext: Context1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierContext"));
	}

	template <typename T = void*> T& EntityWithId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void*> T get_EntityWithId() {
		return ((T (*)(ModifierContext*))(Il2CppBase() + 0x1D7B57C))(this);
	}
	template <typename T = void> T set_EntityWithId(void* value) {
		return ((T (*)(ModifierContext*, void*))(Il2CppBase() + 0x1D7B584))(this, value);
	}
	template <typename T = void> T ModifierContext_OnEntityCreated(uintptr_t context, uintptr_t entity) {
		return ((T (*)(ModifierContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D7B9E8))(this, context, entity);
	}
	template <typename T = void> T OnComponentAdded(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(ModifierContext*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1D7BA50))(this, entity, index, component);
	}
	template <typename T = void> T OnComponentRemoved(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(ModifierContext*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1D7BAC0))(this, entity, index, component);
	}

};

}
