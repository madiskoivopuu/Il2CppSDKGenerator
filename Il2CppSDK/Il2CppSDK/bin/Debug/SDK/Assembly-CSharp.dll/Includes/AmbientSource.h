#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AmbientSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AmbientSource"));
	}

	template <typename R = uintptr_t> R& audioSource() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& count() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

