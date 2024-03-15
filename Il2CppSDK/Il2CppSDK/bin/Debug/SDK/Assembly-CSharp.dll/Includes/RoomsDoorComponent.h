#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomsDoorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomsDoorComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RoomsDoorComponent*, Il2CppObject*))(Il2CppBase() + 0x11A495C))(this, target);
	}

};

