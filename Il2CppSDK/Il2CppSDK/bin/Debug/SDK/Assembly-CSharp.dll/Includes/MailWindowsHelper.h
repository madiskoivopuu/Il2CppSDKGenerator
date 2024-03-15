#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailWindowsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailWindowsHelper"));
	}


	template <typename R = bool> static R ShowMailWindow(UIWindowsManager* manager, MailEntity* mailEntity, Source source) {
		return ((R (*)(void *, UIWindowsManager*, MailEntity*, Source))(Il2CppBase() + 0x125FBF4))(0, manager, mailEntity, source);
	}

};

