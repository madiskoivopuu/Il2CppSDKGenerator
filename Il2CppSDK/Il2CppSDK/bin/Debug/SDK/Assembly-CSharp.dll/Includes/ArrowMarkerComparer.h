#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrowMarkerComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrowMarkerComparer"));
	}


	template <typename T = int32_t> T Compare(GameEntity* x, GameEntity* y) {
		return ((T (*)(ArrowMarkerComparer*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1167558))(this, x, y);
	}

};

