#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationFarmWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationFarmWindowHelper"));
	}


	template <typename R = LocationFarmWindow*> static R ShowLocationFarmWindow(UIWindowsManager* manager, TransactionEntity* transaction) {
		return ((R (*)(void *, UIWindowsManager*, TransactionEntity*))(Il2CppBase() + 0x17B1F84))(0, manager, transaction);
	}

};

