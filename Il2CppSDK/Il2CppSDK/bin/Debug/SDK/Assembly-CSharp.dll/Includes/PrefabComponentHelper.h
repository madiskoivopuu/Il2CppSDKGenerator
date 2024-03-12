#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabComponentHelper"));
	}


	template <typename T = Il2CppString*> static T GetName(uintptr_t prefabComponent, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DEF68))(0, prefabComponent, entity);
	}

};

}
