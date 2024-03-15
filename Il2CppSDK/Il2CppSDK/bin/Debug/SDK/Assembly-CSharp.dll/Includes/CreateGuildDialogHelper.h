#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateGuildDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowCreateGuild(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1BCA14C))(0, manager);
	}
	template <typename R = void> static R OnReceiveCreateGuildResponse(UIWindowsManager* manager, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x1BCA208))(0, manager, errorCode);
	}

};

