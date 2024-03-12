#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Leavepoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Leavepoint"));
	}

	template <typename T = int32_t> T& QuadId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
