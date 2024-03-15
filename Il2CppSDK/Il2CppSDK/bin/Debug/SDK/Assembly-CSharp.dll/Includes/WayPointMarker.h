#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WayPointMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WayPointMarker"));
	}

	template <typename R = Il2CppString*> R& PointName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = WayPointMarker*> R& NextPoint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnDrawGizmos() {
		return ((R (*)(WayPointMarker*))(Il2CppBase() + 0x112F1E0))(this);
	}

};

