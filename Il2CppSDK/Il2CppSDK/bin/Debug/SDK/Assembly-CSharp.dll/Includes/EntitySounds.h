#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntitySounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntitySounds"));
	}

	template <typename R = Il2CppString*> R& FootstepTheme() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& FootstepInvisibleTheme() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& DeathTheme() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& DamageTheme() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& CreateTheme() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& DestroyTheme() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& OpenTheme() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& CloseTheme() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& AggressionTheme() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& AggressionChance() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& AggressionInterval() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = int32_t> R& _entityId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uint32_t> R& _stepId() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = uintptr_t> R& _aggressionCoroutine() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R Init(GameEntity* entity) {
		return ((R (*)(EntitySounds*, GameEntity*))(Il2CppBase() + 0x1377D18))(this, entity);
	}
	template <typename R = GameEntity*> R GetEntity() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x1377EF8))(this);
	}
	template <typename R = void> R RefeshAggression() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x1377E74))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x1378074))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x1378078))(this);
	}
	template <typename R = void> R Step() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x137810C))(this);
	}
	template <typename R = void> R StepStealth() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x13781DC))(this);
	}
	template <typename R = uintptr_t> R AggressionCoroutine() {
		return ((R (*)(EntitySounds*))(Il2CppBase() + 0x1377FFC))(this);
	}

};

