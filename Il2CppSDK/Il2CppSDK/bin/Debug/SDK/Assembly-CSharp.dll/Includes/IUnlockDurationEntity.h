#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnlockDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnlockDurationEntity"));
	}


	template <typename T = UnlockDurationComponent*> T get_unlockDuration() {
		return ((T (*)(IUnlockDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasUnlockDuration() {
		return ((T (*)(IUnlockDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((T (*)(IUnlockDurationEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newUnlockedEffect, newDuration);
	}
	template <typename T = void> T ReplaceUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((T (*)(IUnlockDurationEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newUnlockedEffect, newDuration);
	}
	template <typename T = void> T RemoveUnlockDuration() {
		return ((T (*)(IUnlockDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

