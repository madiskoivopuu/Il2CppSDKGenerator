#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientGuildHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientGuildHelper"));
	}


	template <typename T = ValueTuple2bool, Il2CppString*>*> static T CanCreateGuild() {
		return ((T (*)(void *))(Il2CppBase() + 0xE17E04))(0);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T IsGuildOperationsLocked() {
		return ((T (*)(void *))(Il2CppBase() + 0xE1836C))(0);
	}

};

