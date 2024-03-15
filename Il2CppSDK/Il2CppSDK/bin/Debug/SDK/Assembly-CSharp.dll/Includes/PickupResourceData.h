#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupResourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickupResourceData"));
	}

	template <typename R = int32_t> R& PickedCount() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& RestCount() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

