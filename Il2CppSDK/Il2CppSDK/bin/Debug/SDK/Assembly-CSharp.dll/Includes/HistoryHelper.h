#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryHelper"));
	}


	template <typename T = float> static T GetDPS(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1C522F4))(0, entity, world);
	}

};

