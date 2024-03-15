#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StarView"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& SelectedMark() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

