#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateGuildDialogHelper"));
	}


	template <typename T = UIWindow*> static T ShowCreateGuild(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1BCA14C))(0, manager);
	}
	template <typename T = void> static T OnReceiveCreateGuildResponse(UIWindowsManager* manager, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*))(Il2CppBase() + 0x1BCA208))(0, manager, errorCode);
	}

};

