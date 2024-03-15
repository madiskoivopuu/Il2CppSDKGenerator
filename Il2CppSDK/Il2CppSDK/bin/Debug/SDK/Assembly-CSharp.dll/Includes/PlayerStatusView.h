#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatusView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatusView"));
	}

	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _hpFill() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _hp() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R UpdateUI(Il2CppString* actorName, float health, float maxHealth) {
		return ((R (*)(PlayerStatusView*, Il2CppString*, float, float))(Il2CppBase() + 0x157384C))(this, actorName, health, maxHealth);
	}

};

