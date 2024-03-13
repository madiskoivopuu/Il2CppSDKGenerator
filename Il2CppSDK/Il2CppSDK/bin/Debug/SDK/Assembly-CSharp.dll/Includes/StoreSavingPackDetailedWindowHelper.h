#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSavingPackDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSavingPackDetailedWindowHelper"));
	}


	template <typename T = StoreSavingPackDetailedWindow*> static T ShowStoreSavingPackDetailed(UIWindowsManager* manager, Il2CppString* blueprintName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x1844988))(0, manager, blueprintName);
	}

};

