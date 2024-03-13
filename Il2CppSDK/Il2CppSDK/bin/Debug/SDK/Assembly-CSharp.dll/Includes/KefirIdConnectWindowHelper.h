#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdConnectWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdConnectWindowHelper"));
	}


	template <typename T = KefirIdConnectWindow*> static T ShowKefirIdConnect(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14EA234))(0, manager);
	}

};

