#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class DiplomacyWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyWindow"));
	}

	template <typename T = uintptr_t> T& PreRaidPanelRoot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RaidPanelRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& YourClanView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NeighbourClanView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SearchTimer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RaidTimer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& AllowClanMembersStartRaidContainer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& AllowClanMembersStartRaidToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(DiplomacyWindow*))(Il2CppBase() + 0x12FF54C))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(DiplomacyWindow*))(Il2CppBase() + 0x12FFCBC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DiplomacyWindow*, float))(Il2CppBase() + 0x12FFEC8))(this, deltaTime);
	}
	template <typename T = void> T UpdateRaidView(uintptr_t enemy) {
		return ((T (*)(DiplomacyWindow*, uintptr_t))(Il2CppBase() + 0x12FFB10))(this, enemy);
	}
	template <typename T = void> T UpdateSearchTimer() {
		return ((T (*)(DiplomacyWindow*))(Il2CppBase() + 0x1300528))(this);
	}
	template <typename T = void> T UpdateRaidTimer() {
		return ((T (*)(DiplomacyWindow*))(Il2CppBase() + 0x1300088))(this);
	}
	template <typename T = uintptr_t> T GetNeighbourClan() {
		return ((T (*)(DiplomacyWindow*))(Il2CppBase() + 0x12FF8B0))(this);
	}

};

}
