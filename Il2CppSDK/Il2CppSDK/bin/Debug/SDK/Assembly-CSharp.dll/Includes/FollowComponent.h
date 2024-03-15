#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowComponent"));
	}

	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FollowComponent*, Il2CppObject*))(Il2CppBase() + 0x15F9CDC))(this, targetObject);
	}

};

