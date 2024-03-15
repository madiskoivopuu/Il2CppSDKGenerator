#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientClanHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientClanHelper"));
	}


	 static ValueTuple2<bool, Il2CppString*>* CanUseClanAndGuild(bool needErrorMsg) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, bool))(Il2CppBase() + 0x1913ED8))(0, needErrorMsg);
	}

};

