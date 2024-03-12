#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StarView"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SelectedMark() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
