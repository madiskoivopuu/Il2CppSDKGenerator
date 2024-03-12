#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundComparer"));
	}

	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(LoopSoundComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEE1FA0))(this, x, y);
	}

};

}
