#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttachEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttachEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1EffectEntity*>*> T& _attachEffects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IGroup1EffectEntity*>*> T& _followCameraEffects() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AttachEffectSystem*))(Il2CppBase() + 0x1A5A574))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AttachEffectSystem*))(Il2CppBase() + 0x1A5A634))(this);
	}
	template <typename T = void> T ExecuteFollow(EffectEntity* effect, GameEntity* target) {
		return ((T (*)(AttachEffectSystem*, EffectEntity*, GameEntity*))(Il2CppBase() + 0x1A5AB64))(this, effect, target);
	}
	template <typename T = void> T ExecuteElastic(EffectEntity* effect, GameEntity* target) {
		return ((T (*)(AttachEffectSystem*, EffectEntity*, GameEntity*))(Il2CppBase() + 0x1A5AE5C))(this, effect, target);
	}

};

