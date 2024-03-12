#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TimeEffectSystem*))(Il2CppBase() + 0x14F05C4))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TimeEffectSystem*))(Il2CppBase() + 0x14F0708))(this);
	}

};

}
