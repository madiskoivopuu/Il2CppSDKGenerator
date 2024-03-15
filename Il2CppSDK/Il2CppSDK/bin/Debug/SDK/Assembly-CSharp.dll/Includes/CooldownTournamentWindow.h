#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CooldownTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownTournamentWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CooldownText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CooldownTime() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CooldownTournamentWindow*))(Il2CppBase() + 0x133A1FC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CooldownTournamentWindow*))(Il2CppBase() + 0x133A58C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CooldownTournamentWindow*, float))(Il2CppBase() + 0x133A5F8))(this, deltaTime);
	}

};

