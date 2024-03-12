#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntitySounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntitySounds"));
	}

	template <typename T = Il2CppString*> T& FootstepTheme() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FootstepInvisibleTheme() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& DeathTheme() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& DamageTheme() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& CreateTheme() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& DestroyTheme() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& OpenTheme() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& CloseTheme() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& AggressionTheme() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& AggressionChance() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& AggressionInterval() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _entityId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _stepId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& _aggressionCoroutine() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Init(uintptr_t entity) {
		return ((T (*)(EntitySounds*, uintptr_t))(Il2CppBase() + 0x1377D18))(this, entity);
	}
	template <typename T = uintptr_t> T GetEntity() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x1377EF8))(this);
	}
	template <typename T = void> T RefeshAggression() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x1377E74))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x1378074))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x1378078))(this);
	}
	template <typename T = void> T Step() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x137810C))(this);
	}
	template <typename T = void> T StepStealth() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x13781DC))(this);
	}
	template <typename T = uintptr_t> T AggressionCoroutine() {
		return ((T (*)(EntitySounds*))(Il2CppBase() + 0x1377FFC))(this);
	}

};

}
