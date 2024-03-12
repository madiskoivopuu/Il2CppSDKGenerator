#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundIdComponent"));
	}

	template <typename T = uint32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
