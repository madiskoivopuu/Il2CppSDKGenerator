#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityViewLinkSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityViewLinkSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(EntityViewLinkSystem*, void*))(Il2CppBase() + 0x137A9A0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(EntityViewLinkSystem*, uintptr_t))(Il2CppBase() + 0x137AAC4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(EntityViewLinkSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x137AB10))(this, entities);
	}

};

}
