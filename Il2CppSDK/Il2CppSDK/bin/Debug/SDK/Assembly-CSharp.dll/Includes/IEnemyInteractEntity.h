#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnemyInteractEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnemyInteractEntity"));
	}


	template <typename T = uintptr_t> T get_enemyInteract() {
		return ((T (*)(IEnemyInteractEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEnemyInteract() {
		return ((T (*)(IEnemyInteractEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEnemyInteract(uintptr_t newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, uintptr_t newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(IEnemyInteractEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceEnemyInteract(uintptr_t newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, uintptr_t newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(IEnemyInteractEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveEnemyInteract() {
		return ((T (*)(IEnemyInteractEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
