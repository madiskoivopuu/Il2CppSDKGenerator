#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientMountHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientMountHelper"));
	}


	template <typename T = Il2CppList<ItemEntity*>*> static T GetAllMounts(ICommonClientWorld* world) {
		return ((T (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xE19CC4))(0, world);
	}

};

