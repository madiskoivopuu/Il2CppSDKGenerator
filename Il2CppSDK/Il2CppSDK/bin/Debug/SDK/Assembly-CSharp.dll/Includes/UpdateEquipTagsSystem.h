#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateEquipTagsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateEquipTagsSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& _indexes() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 ICollector1ModifierEntity*>* GetTrigger(IContext1ModifierEntity*>* context) {
		return ((ICollector1ModifierEntity*>* (*)(UpdateEquipTagsSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x153C7F4))(this, context);
	}
	template <typename R = bool> R Filter(ModifierEntity* modifier) {
		return ((R (*)(UpdateEquipTagsSystem*, ModifierEntity*))(Il2CppBase() + 0x153C8C0))(this, modifier);
	}
	template <typename R = void> R Execute(Il2CppList<ModifierEntity*>* modifiers) {
		return ((R (*)(UpdateEquipTagsSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x153C90C))(this, modifiers);
	}
	template <typename R = bool> R UpdateEquipTags(GameEntity* entity, ModifierEntity* modifier, uintptr_t tagsSet) {
		return ((R (*)(UpdateEquipTagsSystem*, GameEntity*, ModifierEntity*, uintptr_t))(Il2CppBase() + 0x153CB48))(this, entity, modifier, tagsSet);
	}

};

