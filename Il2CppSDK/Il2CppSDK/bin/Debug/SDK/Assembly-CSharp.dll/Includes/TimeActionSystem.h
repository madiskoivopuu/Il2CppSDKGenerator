#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeActionSystem"));
	}

	template <typename T = uintptr_t> T& _arenaWorld() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _checkBreak() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TimeActionSystem*))(Il2CppBase() + 0x14EFC58))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TimeActionSystem*))(Il2CppBase() + 0x14EFEF0))(this);
	}

};

}
