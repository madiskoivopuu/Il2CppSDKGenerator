#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGameContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGameContexts"));
	}


	template <typename R = GameContext*> R get_game() {
		return ((R (*)(IGameContexts*))(Il2CppBase() + 0x0))(this);
	}

};

