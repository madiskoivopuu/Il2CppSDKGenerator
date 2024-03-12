#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingEquipTagsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingEquipTagsSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ArmingEquipTagsSystem*, void*))(Il2CppBase() + 0x1A51594))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ArmingEquipTagsSystem*, uintptr_t))(Il2CppBase() + 0x1A519FC))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ArmingEquipTagsSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1A51A18))(this, entities);
	}

};

}
