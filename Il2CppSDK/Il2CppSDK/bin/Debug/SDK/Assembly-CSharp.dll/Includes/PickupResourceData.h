#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupResourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickupResourceData"));
	}

	template <typename T = int32_t> T& PickedCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& RestCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
