#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowComponent"));
	}

	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(FollowComponent*, uintptr_t))(Il2CppBase() + 0x15F9CDC))(this, targetObject);
	}

};

}
