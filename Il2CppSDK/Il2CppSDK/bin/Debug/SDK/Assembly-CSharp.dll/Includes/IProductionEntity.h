#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProductionEntity"));
	}


	template <typename T = ProductionComponent*> T get_production() {
		return ((T (*)(IProductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasProduction() {
		return ((T (*)(IProductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<uintptr_t>* newLeavepoints) {
		return ((T (*)(IProductionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename T = void> T ReplaceProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<uintptr_t>* newLeavepoints) {
		return ((T (*)(IProductionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename T = void> T RemoveProduction() {
		return ((T (*)(IProductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

