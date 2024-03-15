#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundIdComponent"));
	}

	template <typename R = uint32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

