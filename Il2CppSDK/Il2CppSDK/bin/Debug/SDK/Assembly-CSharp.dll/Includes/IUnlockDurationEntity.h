#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockDurationEntity"));
	}


	template <typename R = UnlockDurationComponent*> R get_unlockDuration() {
		return ((R (*)(IUnlockDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasUnlockDuration() {
		return ((R (*)(IUnlockDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((R (*)(IUnlockDurationEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newUnlockedEffect, newDuration);
	}
	template <typename R = void> R ReplaceUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((R (*)(IUnlockDurationEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newUnlockedEffect, newDuration);
	}
	template <typename R = void> R RemoveUnlockDuration() {
		return ((R (*)(IUnlockDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

