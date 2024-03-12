#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HashPositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HashPositionComponent"));
	}

	template <typename T = int64_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
