#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdAlertWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAlertWindowHelper"));
	}


	template <typename R = KefirIdAlertWindow*> static R ShowKefirIdAlert(UIWindowsManager* manager, Il2CppString* errorMessage) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x14E9C98))(0, manager, errorMessage);
	}

};

