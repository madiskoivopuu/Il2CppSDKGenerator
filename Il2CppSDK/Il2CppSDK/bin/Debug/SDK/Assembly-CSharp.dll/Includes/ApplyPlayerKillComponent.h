#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPlayerKillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPlayerKillComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

