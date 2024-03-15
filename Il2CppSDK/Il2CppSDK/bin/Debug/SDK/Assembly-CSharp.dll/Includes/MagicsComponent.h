#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicsComponent"));
	}

	template <typename R = Il2CppArray<Item>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& DontShow() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MagicsComponent*, Il2CppObject*))(Il2CppBase() + 0x1A47788))(this, target);
	}

};

