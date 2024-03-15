#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewRect"));
	}

	template <typename R = float> R& Left() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Right() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& Top() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Bottom() {
		return *(R*)((uintptr_t)this + 0x1C);
	}


};

