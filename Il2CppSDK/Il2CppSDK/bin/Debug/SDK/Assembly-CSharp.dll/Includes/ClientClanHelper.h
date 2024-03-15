#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientClanHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientClanHelper"));
	}


	 static ValueTuple2bool, Il2CppString*>* CanUseClanAndGuild(bool needErrorMsg) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *, bool))(Il2CppBase() + 0x1913ED8))(0, needErrorMsg);
	}

};

