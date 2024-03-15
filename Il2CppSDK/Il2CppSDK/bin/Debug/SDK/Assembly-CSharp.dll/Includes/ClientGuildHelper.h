#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientGuildHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientGuildHelper"));
	}


	 static ValueTuple2bool, Il2CppString*>* CanCreateGuild() {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *))(Il2CppBase() + 0xE17E04))(0);
	}
	 static ValueTuple2bool, Il2CppString*>* IsGuildOperationsLocked() {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *))(Il2CppBase() + 0xE1836C))(0);
	}

};

