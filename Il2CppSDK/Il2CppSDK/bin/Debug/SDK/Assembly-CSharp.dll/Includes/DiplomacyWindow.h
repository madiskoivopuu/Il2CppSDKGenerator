#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DiplomacyWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyWindow"));
	}

	template <typename R = uintptr_t> R& PreRaidPanelRoot() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& RaidPanelRoot() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = ClanView*> R& YourClanView() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = ClanView*> R& NeighbourClanView() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& SearchTimer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& RaidTimer() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& AllowClanMembersStartRaidContainer() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& AllowClanMembersStartRaidToggle() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(DiplomacyWindow*))(Il2CppBase() + 0x12FF54C))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(DiplomacyWindow*))(Il2CppBase() + 0x12FFCBC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DiplomacyWindow*, float))(Il2CppBase() + 0x12FFEC8))(this, deltaTime);
	}
	template <typename R = void> R UpdateRaidView(ClanEntity* enemy) {
		return ((R (*)(DiplomacyWindow*, ClanEntity*))(Il2CppBase() + 0x12FFB10))(this, enemy);
	}
	template <typename R = void> R UpdateSearchTimer() {
		return ((R (*)(DiplomacyWindow*))(Il2CppBase() + 0x1300528))(this);
	}
	template <typename R = void> R UpdateRaidTimer() {
		return ((R (*)(DiplomacyWindow*))(Il2CppBase() + 0x1300088))(this);
	}
	template <typename R = ClanEntity*> R GetNeighbourClan() {
		return ((R (*)(DiplomacyWindow*))(Il2CppBase() + 0x12FF8B0))(this);
	}

};

