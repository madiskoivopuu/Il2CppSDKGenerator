#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeMarkerSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TimeMarkerSystem*))(Il2CppBase() + 0x14F09C8))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TimeMarkerSystem*))(Il2CppBase() + 0x14F0B0C))(this);
	}

};

}
