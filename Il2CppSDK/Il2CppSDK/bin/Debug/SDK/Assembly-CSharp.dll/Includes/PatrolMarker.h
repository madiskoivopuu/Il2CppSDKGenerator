#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatrolMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatrolMarker"));
	}

	template <typename R = Il2CppString*> R& MagicName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = WayPointMarker*> R& NextPoint() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnDrawGizmos() {
		return ((R (*)(PatrolMarker*))(Il2CppBase() + 0x11E9F4C))(this);
	}

};

