#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundContainer"));
	}

	template <typename T = uintptr_t> T& Transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

