#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabComponentHelper"));
	}


	template <typename R = Il2CppString*> static R GetName(PrefabComponent* prefabComponent, GameEntity* entity) {
		return ((R (*)(void *, PrefabComponent*, GameEntity*))(Il2CppBase() + 0x16DEF68))(0, prefabComponent, entity);
	}

};

