#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeFollowTargetSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeFollowTargetSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ChangeFollowTargetSystem*, void*))(Il2CppBase() + 0x13EA3AC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ChangeFollowTargetSystem*, uintptr_t))(Il2CppBase() + 0x13EA404))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ChangeFollowTargetSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x13EA420))(this, entities);
	}

};

}
