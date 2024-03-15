#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerNameComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerNameComparer"));
	}


	template <typename R = int32_t> R Compare(GameEntity* x, GameEntity* y) {
		return ((R (*)(PlayerNameComparer*, GameEntity*, GameEntity*))(Il2CppBase() + 0x116761C))(this, x, y);
	}

};

