#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractTargetEntity"));
	}


	template <typename R = InteractTargetComponent*> R get_interactTarget() {
		return ((R (*)(IInteractTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInteractTarget() {
		return ((R (*)(IInteractTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((R (*)(IInteractTargetEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0x0))(this, newId, newPosition);
	}
	template <typename R = void> R ReplaceInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((R (*)(IInteractTargetEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0x0))(this, newId, newPosition);
	}
	template <typename R = void> R RemoveInteractTarget() {
		return ((R (*)(IInteractTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

