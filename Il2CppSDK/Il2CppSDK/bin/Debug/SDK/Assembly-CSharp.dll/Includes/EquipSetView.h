#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipSetView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipSetView"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

