#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundContainer"));
	}

	template <typename R = uintptr_t> R& Transform() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Sound() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uint32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

