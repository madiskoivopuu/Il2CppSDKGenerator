#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerEnterComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerEnterComponent"));
	}

	template <typename R = bool> R& Creation() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

