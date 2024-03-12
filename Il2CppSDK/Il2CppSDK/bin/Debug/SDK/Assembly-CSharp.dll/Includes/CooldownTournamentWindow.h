#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class CooldownTournamentWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownTournamentWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CooldownText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CooldownTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CooldownTournamentWindow*))(Il2CppBase() + 0x133A1FC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CooldownTournamentWindow*))(Il2CppBase() + 0x133A58C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CooldownTournamentWindow*, float))(Il2CppBase() + 0x133A5F8))(this, deltaTime);
	}

};

}
