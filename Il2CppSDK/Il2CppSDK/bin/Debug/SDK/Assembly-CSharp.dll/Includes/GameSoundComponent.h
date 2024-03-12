#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameSoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameSoundComponent"));
	}

	template <typename T = Il2CppString*> T& Death() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Footstep() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FootstepInvisible() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Create() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Destroy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Aggression() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Open() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Close() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& AggressionInterval() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& AggressionChance() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(GameSoundComponent*, uintptr_t))(Il2CppBase() + 0x176D9E8))(this, targetObject);
	}

};

}
