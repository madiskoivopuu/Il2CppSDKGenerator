#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameConfiguration"));
	}

	template <typename T = float> T& OdinCupProcNormal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& OdinCupProcSuper() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FreyrCupProcNormal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FreyrCupProcSuper() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

