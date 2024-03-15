#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProductionEntity"));
	}


	template <typename R = ProductionComponent*> R get_production() {
		return ((R (*)(IProductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasProduction() {
		return ((R (*)(IProductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<Leavepoint>* newLeavepoints) {
		return ((R (*)(IProductionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<Leavepoint>*))(Il2CppBase() + 0x0))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename R = void> R ReplaceProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<Leavepoint>* newLeavepoints) {
		return ((R (*)(IProductionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<Leavepoint>*))(Il2CppBase() + 0x0))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename R = void> R RemoveProduction() {
		return ((R (*)(IProductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

