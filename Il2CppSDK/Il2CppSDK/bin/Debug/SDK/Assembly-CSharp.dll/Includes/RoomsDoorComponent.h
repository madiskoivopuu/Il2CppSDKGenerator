#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomsDoorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomsDoorComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RoomsDoorComponent*, uintptr_t))(Il2CppBase() + 0x11A495C))(this, target);
	}

};

}
