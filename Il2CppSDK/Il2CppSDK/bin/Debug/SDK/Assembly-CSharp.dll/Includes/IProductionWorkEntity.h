#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProductionWorkEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProductionWorkEntity"));
	}


	template <typename R = ProductionWorkComponent*> R get_productionWork() {
		return ((R (*)(IProductionWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasProductionWork() {
		return ((R (*)(IProductionWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((R (*)(IProductionWorkEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x0))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename R = void> R ReplaceProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((R (*)(IProductionWorkEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x0))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename R = void> R RemoveProductionWork() {
		return ((R (*)(IProductionWorkEntity*))(Il2CppBase() + 0x0))(this);
	}

};

