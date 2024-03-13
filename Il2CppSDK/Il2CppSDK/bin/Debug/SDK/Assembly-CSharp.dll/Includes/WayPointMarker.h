#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WayPointMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WayPointMarker"));
	}

	template <typename T = Il2CppString*> T& PointName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = WayPointMarker*> T& NextPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(WayPointMarker*))(Il2CppBase() + 0x112F1E0))(this);
	}

};

