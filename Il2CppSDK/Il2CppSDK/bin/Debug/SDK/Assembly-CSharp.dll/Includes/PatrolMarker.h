#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatrolMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatrolMarker"));
	}

	template <typename T = Il2CppString*> T& MagicName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = WayPointMarker*> T& NextPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PatrolMarker*))(Il2CppBase() + 0x11E9F4C))(this);
	}

};

