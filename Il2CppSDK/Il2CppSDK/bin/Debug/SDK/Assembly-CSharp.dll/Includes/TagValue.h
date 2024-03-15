#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TagValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TagValue"));
	}

	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& Range() {
		return *(R*)((uintptr_t)this + 0xC);
	}


};

