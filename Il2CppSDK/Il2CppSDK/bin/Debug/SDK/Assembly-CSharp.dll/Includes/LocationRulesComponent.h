#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationRulesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationRulesComponent"));
	}

	template <typename T = StatusNameShow*> T& StatusNameShow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& KillOnTimeout() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppString*> T& KillOnTimeoutCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1float>*> T& ArmorDurabilityDecreaseCoef() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1float>*> T& WeaponDurabilityDecreaseCoef() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Nullable1float>*> T& OnDeathDurabilityDecreaseCoef() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& PersonalCorpse() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& RespawnOnArena() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = SpawnTypes*> T& SpawnType() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& ShowChangeHealthOnlyForPlayer() {
		return *(T*)((uintptr_t)this + 0x3B);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(LocationRulesComponent*, Il2CppObject*))(Il2CppBase() + 0x171ED1C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationRulesComponent*, uintptr_t))(Il2CppBase() + 0x171EE00))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationRulesComponent*, uintptr_t))(Il2CppBase() + 0x171F014))(this, writer);
	}

};

