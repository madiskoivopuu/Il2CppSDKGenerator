#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreePoint"));
	}

	template <typename R = uintptr_t> R& point() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& data() {
		return *(R*)((uintptr_t)this + 0x1C);
	}


};

