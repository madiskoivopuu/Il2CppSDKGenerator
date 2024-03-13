#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateEquipTagsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateEquipTagsSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _indexes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ICollector1ModifierEntity*>*> T GetTrigger(IContext1ModifierEntity*>* context) {
		return ((T (*)(UpdateEquipTagsSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x153C7F4))(this, context);
	}
	template <typename T = bool> T Filter(ModifierEntity* modifier) {
		return ((T (*)(UpdateEquipTagsSystem*, ModifierEntity*))(Il2CppBase() + 0x153C8C0))(this, modifier);
	}
	template <typename T = void> T Execute(Il2CppList<ModifierEntity*>* modifiers) {
		return ((T (*)(UpdateEquipTagsSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x153C90C))(this, modifiers);
	}
	template <typename T = bool> T UpdateEquipTags(GameEntity* entity, ModifierEntity* modifier, uintptr_t tagsSet) {
		return ((T (*)(UpdateEquipTagsSystem*, GameEntity*, ModifierEntity*, uintptr_t))(Il2CppBase() + 0x153CB48))(this, entity, modifier, tagsSet);
	}

};

