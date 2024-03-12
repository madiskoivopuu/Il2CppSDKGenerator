#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoHelper"));
	}

	template <typename T = Il2CppString*> static T& kServersInfoPlayerPrefsKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Save(Il2CppString* serverName, Il2CppString* currentSubregion) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x161E7D4))(0, serverName, currentSubregion);
	}
	template <typename T = void> static T Load(uintptr_t context, uintptr_t OnLoad) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x161E8D0))(0, context, OnLoad);
	}
	template <typename T = uintptr_t> static T ConvertStringToServerStatus(Il2CppString* status) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x161EB38))(0, status);
	}
	template <typename T = void*> static T GetCurrentRegion() {
		return ((T (*)(void *))(Il2CppBase() + 0x161ED74))(0);
	}

};

}
