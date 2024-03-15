#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuilderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuilderEntity"));
	}


	template <typename R = BuilderComponent*> R get_builder() {
		return ((R (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBuilder() {
		return ((R (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType newType, BuilderMode newBuilderMode, Il2CppArray<Resource>* newResources) {
		return ((R (*)(IBuilderEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType, BuilderMode, Il2CppArray<Resource>*))(Il2CppBase() + 0x0))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename R = void> R ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType newType, BuilderMode newBuilderMode, Il2CppArray<Resource>* newResources) {
		return ((R (*)(IBuilderEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType, BuilderMode, Il2CppArray<Resource>*))(Il2CppBase() + 0x0))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename R = void> R RemoveBuilder() {
		return ((R (*)(IBuilderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

