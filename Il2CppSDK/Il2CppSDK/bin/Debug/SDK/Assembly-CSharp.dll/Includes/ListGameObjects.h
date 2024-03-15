#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListGameObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListGameObjects"));
	}

	 Il2CppList<uintptr_t>*& itemList() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = int32_t> R get_Length() {
		return ((R (*)(ListGameObjects*))(Il2CppBase() + 0x22A2C68))(this);
	}

};

