#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetMarkerSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppQuaternion> T& _pathRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TargetMarkerSystem*))(Il2CppBase() + 0x16A4EB0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TargetMarkerSystem*))(Il2CppBase() + 0x16A4F2C))(this);
	}
	template <typename T = void> T ProcessTargetMarker(uintptr_t targetMarker, uintptr_t avatar, uintptr_t avatarPosition, uintptr_t targetTags, uintptr_t bestTarget, uintptr_t bestTargetMarker) {
		return ((T (*)(TargetMarkerSystem*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A5918))(this, targetMarker, avatar, avatarPosition, targetTags, bestTarget, bestTargetMarker);
	}

};

}
