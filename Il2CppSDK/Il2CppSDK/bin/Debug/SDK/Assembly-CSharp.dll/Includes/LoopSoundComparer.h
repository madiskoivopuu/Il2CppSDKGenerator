#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundComparer"));
	}

	template <typename R = uintptr_t> R& Position() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = int32_t> R Compare(LoopSoundContainer* x, LoopSoundContainer* y) {
		return ((R (*)(LoopSoundComparer*, LoopSoundContainer*, LoopSoundContainer*))(Il2CppBase() + 0xEE1FA0))(this, x, y);
	}

};

