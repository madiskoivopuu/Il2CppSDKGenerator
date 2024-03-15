#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetMarkerSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1EffectEntity*>*& _effects() {
		return *(IGroup1EffectEntity*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _pathRotation() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(TargetMarkerSystem*))(Il2CppBase() + 0x16A4EB0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(TargetMarkerSystem*))(Il2CppBase() + 0x16A4F2C))(this);
	}
	template <typename R = void> R ProcessTargetMarker(TargetMarkerComponent* targetMarker, GameEntity* avatar, PositionComponent* avatarPosition, TargetTagsComponent* targetTags, uintptr_t bestTarget, uintptr_t bestTargetMarker) {
		return ((R (*)(TargetMarkerSystem*, TargetMarkerComponent*, GameEntity*, PositionComponent*, TargetTagsComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A5918))(this, targetMarker, avatar, avatarPosition, targetTags, bestTarget, bestTargetMarker);
	}

};

