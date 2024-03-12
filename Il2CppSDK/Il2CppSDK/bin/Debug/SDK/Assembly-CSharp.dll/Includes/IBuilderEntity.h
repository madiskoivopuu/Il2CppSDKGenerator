#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuilderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuilderEntity"));
	}


	template <typename T = uintptr_t> T get_builder() {
		return ((T (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBuilder() {
		return ((T (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, unsigned char newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, unsigned char newSizeX, unsigned char newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, uintptr_t newType, uintptr_t newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(IBuilderEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, unsigned char, bool, bool, bool, bool, bool, bool, bool, unsigned char, unsigned char, bool, bool, bool, bool, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, unsigned char newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, unsigned char newSizeX, unsigned char newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, uintptr_t newType, uintptr_t newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(IBuilderEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, unsigned char, bool, bool, bool, bool, bool, bool, bool, unsigned char, unsigned char, bool, bool, bool, bool, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T RemoveBuilder() {
		return ((T (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
