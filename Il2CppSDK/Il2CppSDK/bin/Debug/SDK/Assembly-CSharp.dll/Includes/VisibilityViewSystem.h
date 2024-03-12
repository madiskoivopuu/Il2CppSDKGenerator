#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisibilityViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisibilityViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(VisibilityViewSystem*, void*))(Il2CppBase() + 0x15D09F4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(VisibilityViewSystem*, uintptr_t))(Il2CppBase() + 0x15D0B64))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* modifiers) {
		return ((T (*)(VisibilityViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x15D0B80))(this, modifiers);
	}
	template <typename T = void> static T UpdateVisibility(uintptr_t world, uintptr_t entity, int64_t ownerTeamId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x15D0D18))(0, world, entity, ownerTeamId);
	}

};

}
