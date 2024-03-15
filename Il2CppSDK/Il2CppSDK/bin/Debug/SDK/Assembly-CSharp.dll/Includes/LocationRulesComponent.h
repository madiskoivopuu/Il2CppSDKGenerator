#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationRulesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationRulesComponent"));
	}

	template <typename R = StatusNameShow> R& StatusNameShow() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& KillOnTimeout() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Il2CppString*> R& KillOnTimeoutCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<float>*& ArmorDurabilityDecreaseCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x20);
	}
	 Nullable1<float>*& WeaponDurabilityDecreaseCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x28);
	}
	 Nullable1<float>*& OnDeathDurabilityDecreaseCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& PersonalCorpse() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& RespawnOnArena() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = SpawnTypes> R& SpawnType() {
		return *(R*)((uintptr_t)this + 0x3A);
	}
	template <typename R = bool> R& ShowChangeHealthOnlyForPlayer() {
		return *(R*)((uintptr_t)this + 0x3B);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LocationRulesComponent*, Il2CppObject*))(Il2CppBase() + 0x171ED1C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationRulesComponent*, uintptr_t))(Il2CppBase() + 0x171EE00))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationRulesComponent*, uintptr_t))(Il2CppBase() + 0x171F014))(this, writer);
	}

};

