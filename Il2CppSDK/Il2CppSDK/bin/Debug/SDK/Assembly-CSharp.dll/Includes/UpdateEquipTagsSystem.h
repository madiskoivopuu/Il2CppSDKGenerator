#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateEquipTagsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateEquipTagsSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _indexes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(UpdateEquipTagsSystem*, void*))(Il2CppBase() + 0x153C7F4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t modifier) {
		return ((T (*)(UpdateEquipTagsSystem*, uintptr_t))(Il2CppBase() + 0x153C8C0))(this, modifier);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* modifiers) {
		return ((T (*)(UpdateEquipTagsSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x153C90C))(this, modifiers);
	}
	template <typename T = bool> T UpdateEquipTags(uintptr_t entity, uintptr_t modifier, uintptr_t tagsSet) {
		return ((T (*)(UpdateEquipTagsSystem*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x153CB48))(this, entity, modifier, tagsSet);
	}

};

}
