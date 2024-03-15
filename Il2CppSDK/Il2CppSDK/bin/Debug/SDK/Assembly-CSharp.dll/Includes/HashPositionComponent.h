#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HashPositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HashPositionComponent"));
	}

	template <typename R = int64_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

