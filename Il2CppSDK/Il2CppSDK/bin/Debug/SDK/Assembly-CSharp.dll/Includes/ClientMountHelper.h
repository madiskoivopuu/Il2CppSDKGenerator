#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientMountHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientMountHelper"));
	}


	 static Il2CppList<ItemEntity*>* GetAllMounts(ICommonClientWorld* world) {
		return ((Il2CppList<ItemEntity*>* (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xE19CC4))(0, world);
	}

};

