#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuilderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuilderEntity"));
	}


	template <typename T = BuilderComponent*> T get_builder() {
		return ((T (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBuilder() {
		return ((T (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(IBuilderEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(IBuilderEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T RemoveBuilder() {
		return ((T (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

