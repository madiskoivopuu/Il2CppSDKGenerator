#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetMarkerSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1EffectEntity*>*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _pathRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TargetMarkerSystem*))(Il2CppBase() + 0x16A4EB0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TargetMarkerSystem*))(Il2CppBase() + 0x16A4F2C))(this);
	}
	template <typename T = void> T ProcessTargetMarker(TargetMarkerComponent* targetMarker, GameEntity* avatar, PositionComponent* avatarPosition, TargetTagsComponent* targetTags, uintptr_t bestTarget, uintptr_t bestTargetMarker) {
		return ((T (*)(TargetMarkerSystem*, TargetMarkerComponent*, GameEntity*, PositionComponent*, TargetTagsComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A5918))(this, targetMarker, avatar, avatarPosition, targetTags, bestTarget, bestTargetMarker);
	}

};

