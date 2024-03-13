#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RaidWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& JoinRaidContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& StopSearchContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& JoinRaidButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& StopSearchButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SearchTitleText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& SearchDescriptionText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SearchTimer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SearchSelector() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SearchSubsOn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SearchSubsOff() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SearchTimerClockImage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CombatTitleText() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CombatDescriptionText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& CombatTimer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& CombatSelector() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CombatSubsOn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& CombatSubsOff() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& CombatTimerClockImage() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ShieldTitleText() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& ShieldDescriptionText() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& ShieldTimer() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ShieldImage() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ShieldSelector() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ShieldSubsOn() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ShieldSubsOff() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& ShieldTimerClockImage() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& ActiveColor() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppString*> T& _shieldCaptionKey() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& _shieldDescriptionKey() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& _shieldTimerInfinity() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& _isRDFPBuffActive() {
		return *(T*)((uintptr_t)this + 0x178);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(RaidWindow*))(Il2CppBase() + 0x170DEF0))(this);
	}
	template <typename T = void> T CheckActiveBuffs() {
		return ((T (*)(RaidWindow*))(Il2CppBase() + 0x170E034))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(RaidWindow*))(Il2CppBase() + 0x170E57C))(this);
	}
	template <typename T = void> T OnJoinRaidButtonClicked() {
		return ((T (*)(RaidWindow*))(Il2CppBase() + 0x170E5E8))(this);
	}
	template <typename T = void> T OnStopSearchButtonClicked() {
		return ((T (*)(RaidWindow*))(Il2CppBase() + 0x170EA14))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RaidWindow*, float))(Il2CppBase() + 0x170ED74))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDrawg__updateSearchingState|38_0(uintptr_t ) {
		return ((T (*)(RaidWindow*, uintptr_t))(Il2CppBase() + 0x170F144))(this, );
	}
	template <typename T = void> T OnUpdateDrawg__updateCombatState|38_1(uintptr_t ) {
		return ((T (*)(RaidWindow*, uintptr_t))(Il2CppBase() + 0x170F750))(this, );
	}
	template <typename T = void> T OnUpdateDrawg__updateShieldState|38_2(uintptr_t ) {
		return ((T (*)(RaidWindow*, uintptr_t))(Il2CppBase() + 0x170FE34))(this, );
	}
	template <typename T = Il2CppString*> static T OnUpdateDrawg__getEstimatedSearchTimeText|38_3(float estimatedSecondsToSearch, bool isWhite) {
		return ((T (*)(void *, float, bool))(Il2CppBase() + 0x17106EC))(0, estimatedSecondsToSearch, isWhite);
	}
	template <typename T = uintptr_t> static T OnUpdateDrawg__getEstimatedSearchColor|38_4(float estimatedSecondsToSearch) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1710B78))(0, estimatedSecondsToSearch);
	}
	template <typename T = Il2CppString*> T OnUpdateDrawg__getStopwatchSearchingTimer|38_5(int64_t startTick, uintptr_t ) {
		return ((T (*)(RaidWindow*, int64_t, uintptr_t))(Il2CppBase() + 0x17105E0))(this, startTick, );
	}

};

