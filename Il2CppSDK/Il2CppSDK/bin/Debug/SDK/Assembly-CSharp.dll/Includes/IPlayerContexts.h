#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerContexts"));
	}


	template <typename T = PlayerContext*> T get_players() {
		return ((T (*)(IPlayerContexts*))(Il2CppBase() + 0x0))(this);
	}

};

