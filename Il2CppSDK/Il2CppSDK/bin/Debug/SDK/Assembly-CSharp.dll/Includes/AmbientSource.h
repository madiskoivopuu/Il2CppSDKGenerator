#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AmbientSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AmbientSource"));
	}

	template <typename T = uintptr_t> T& audioSource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

