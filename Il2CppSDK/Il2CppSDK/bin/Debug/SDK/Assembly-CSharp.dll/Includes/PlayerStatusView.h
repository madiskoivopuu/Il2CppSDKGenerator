#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatusView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatusView"));
	}

	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _hpFill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _hp() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T UpdateUI(Il2CppString* actorName, float health, float maxHealth) {
		return ((T (*)(PlayerStatusView*, Il2CppString*, float, float))(Il2CppBase() + 0x157384C))(this, actorName, health, maxHealth);
	}

};

