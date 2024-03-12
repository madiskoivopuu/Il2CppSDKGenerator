#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProductionWorkEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProductionWorkEntity"));
	}


	template <typename T = uintptr_t> T get_productionWork() {
		return ((T (*)(IProductionWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasProductionWork() {
		return ((T (*)(IProductionWorkEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((T (*)(IProductionWorkEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x0))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename T = void> T ReplaceProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((T (*)(IProductionWorkEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x0))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename T = void> T RemoveProductionWork() {
		return ((T (*)(IProductionWorkEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
