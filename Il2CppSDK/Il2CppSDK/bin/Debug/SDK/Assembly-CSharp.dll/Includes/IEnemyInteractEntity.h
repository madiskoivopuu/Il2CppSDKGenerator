#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnemyInteractEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnemyInteractEntity"));
	}


	template <typename R = EnemyInteractComponent*> R get_enemyInteract() {
		return ((R (*)(IEnemyInteractEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEnemyInteract() {
		return ((R (*)(IEnemyInteractEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEnemyInteract(ActionType newAction, Il2CppArray<NameChance>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(IEnemyInteractEntity*, ActionType, Il2CppArray<NameChance>*, Il2CppString*, Il2CppString*, InteractActionCondition, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceEnemyInteract(ActionType newAction, Il2CppArray<NameChance>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(IEnemyInteractEntity*, ActionType, Il2CppArray<NameChance>*, Il2CppString*, Il2CppString*, InteractActionCondition, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveEnemyInteract() {
		return ((R (*)(IEnemyInteractEntity*))(Il2CppBase() + 0x0))(this);
	}

};

