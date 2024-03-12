#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipPowerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipPowerSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(EquipPowerSystem*, void*))(Il2CppBase() + 0x137B68C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(EquipPowerSystem*, uintptr_t))(Il2CppBase() + 0x137B9E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(EquipPowerSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x137BA00))(this, entities);
	}

};

}
