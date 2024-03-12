#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Coord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Coord"));
	}

	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Coord*))(Il2CppBase() + 0x133AAF4))(this);
	}
	template <typename T = uintptr_t> static T get_Zero() {
		return ((T (*)(void *))(Il2CppBase() + 0x133AB98))(0);
	}

};

}
