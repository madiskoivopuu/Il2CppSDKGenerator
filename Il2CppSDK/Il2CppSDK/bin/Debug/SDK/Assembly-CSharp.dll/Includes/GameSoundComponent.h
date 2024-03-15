#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameSoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameSoundComponent"));
	}

	template <typename R = Il2CppString*> R& Death() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Footstep() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& FootstepInvisible() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Damage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Create() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Destroy() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Aggression() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& Open() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& Close() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& AggressionInterval() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& AggressionChance() {
		return *(R*)((uintptr_t)this + 0x5C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GameSoundComponent*, Il2CppObject*))(Il2CppBase() + 0x176D9E8))(this, targetObject);
	}

};

