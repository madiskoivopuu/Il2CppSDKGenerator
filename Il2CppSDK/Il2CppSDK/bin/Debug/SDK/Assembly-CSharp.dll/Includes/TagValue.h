#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TagValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TagValue"));
	}

	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Range() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

