#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaWorldExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaWorldExtensions"));
	}


	template <typename R = bool> static R IsActiveShield(IArenaWorld* world) {
		return ((R (*)(void *, IArenaWorld*))(Il2CppBase() + 0x1A5108C))(0, world);
	}

};
