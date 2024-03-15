#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoHelper"));
	}

	template <typename R = Il2CppString*> static R& kServersInfoPlayerPrefsKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R Save(Il2CppString* serverName, Il2CppString* currentSubregion) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x161E7D4))(0, serverName, currentSubregion);
	}
	template <typename R = void> static R Load(ServerInfoContext* context, uintptr_t OnLoad) {
		return ((R (*)(void *, ServerInfoContext*, uintptr_t))(Il2CppBase() + 0x161E8D0))(0, context, OnLoad);
	}
	template <typename R = ServerStatus*> static R ConvertStringToServerStatus(Il2CppString* status) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x161EB38))(0, status);
	}
	 static ValueTuple2Il2CppString*, Il2CppString*>* GetCurrentRegion() {
		return ((ValueTuple2Il2CppString*, Il2CppString*>* (*)(void *))(Il2CppBase() + 0x161ED74))(0);
	}

};

