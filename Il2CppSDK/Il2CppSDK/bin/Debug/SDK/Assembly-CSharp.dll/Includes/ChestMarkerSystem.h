#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ChestMarkerSystem*, void*))(Il2CppBase() + 0x173FD64))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ChestMarkerSystem*, uintptr_t))(Il2CppBase() + 0x173FEB4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ChestMarkerSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x173FF10))(this, entities);
	}
	template <typename T = void> static T UpdateChestMarker(uintptr_t world, uintptr_t entity, uintptr_t ownerAccount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1740040))(0, world, entity, ownerAccount);
	}
	template <typename T = bool> static T ShowChestMarker(uintptr_t entity, uintptr_t ownerAccount, uintptr_t chestMarker) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1740368))(0, entity, ownerAccount, chestMarker);
	}

};

}
