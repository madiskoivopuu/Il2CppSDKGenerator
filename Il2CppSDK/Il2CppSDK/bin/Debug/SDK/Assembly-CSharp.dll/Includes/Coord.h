#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Coord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Coord"));
	}

	template <typename R = int32_t> R& X() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Y() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Coord*))(Il2CppBase() + 0x133AAF4))(this);
	}
	template <typename R = Coord*> static R get_Zero() {
		return ((R (*)(void *))(Il2CppBase() + 0x133AB98))(0);
	}

};

