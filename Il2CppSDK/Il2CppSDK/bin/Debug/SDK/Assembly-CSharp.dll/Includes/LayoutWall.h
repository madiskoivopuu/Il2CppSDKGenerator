#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LayoutWall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LayoutWall"));
	}

	template <typename R = uintptr_t> R& Gizmo() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};
