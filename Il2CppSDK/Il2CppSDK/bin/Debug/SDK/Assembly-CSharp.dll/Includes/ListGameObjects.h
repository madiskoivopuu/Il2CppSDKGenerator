#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListGameObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListGameObjects"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Length() {
		return ((T (*)(ListGameObjects*))(Il2CppBase() + 0x22A2C68))(this);
	}

};

