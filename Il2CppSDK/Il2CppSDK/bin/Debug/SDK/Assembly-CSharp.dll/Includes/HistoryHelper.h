#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryHelper"));
	}


	template <typename T = float> static T GetDPS(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C522F4))(0, entity, world);
	}

};

}
