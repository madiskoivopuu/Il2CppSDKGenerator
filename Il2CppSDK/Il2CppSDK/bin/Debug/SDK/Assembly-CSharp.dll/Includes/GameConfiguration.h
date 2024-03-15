#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameConfiguration"));
	}

	template <typename R = float> R& OdinCupProcNormal() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& OdinCupProcSuper() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& FreyrCupProcNormal() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& FreyrCupProcSuper() {
		return *(R*)((uintptr_t)this + 0x1C);
	}


};

