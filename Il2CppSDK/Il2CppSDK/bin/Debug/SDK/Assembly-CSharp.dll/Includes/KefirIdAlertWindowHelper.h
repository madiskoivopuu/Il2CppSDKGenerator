#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdAlertWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAlertWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowKefirIdAlert(uintptr_t manager, Il2CppString* errorMessage) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14E9C98))(0, manager, errorMessage);
	}

};

}
