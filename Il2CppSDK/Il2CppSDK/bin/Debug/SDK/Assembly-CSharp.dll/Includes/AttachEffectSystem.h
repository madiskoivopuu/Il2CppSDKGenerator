#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttachEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttachEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1EffectEntity*>*& _attachEffects() {
		return *(IGroup1EffectEntity*>**)((uintptr_t)this + 0x18);
	}
	 IGroup1EffectEntity*>*& _followCameraEffects() {
		return *(IGroup1EffectEntity*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AttachEffectSystem*))(Il2CppBase() + 0x1A5A574))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AttachEffectSystem*))(Il2CppBase() + 0x1A5A634))(this);
	}
	template <typename R = void> R ExecuteFollow(EffectEntity* effect, GameEntity* target) {
		return ((R (*)(AttachEffectSystem*, EffectEntity*, GameEntity*))(Il2CppBase() + 0x1A5AB64))(this, effect, target);
	}
	template <typename R = void> R ExecuteElastic(EffectEntity* effect, GameEntity* target) {
		return ((R (*)(AttachEffectSystem*, EffectEntity*, GameEntity*))(Il2CppBase() + 0x1A5AE5C))(this, effect, target);
	}

};

