#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RaidWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& JoinRaidContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& StopSearchContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& JoinRaidButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& StopSearchButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& SearchTitleText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& SearchDescriptionText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& SearchTimer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& SearchSelector() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& SearchSubsOn() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& SearchSubsOff() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& SearchTimerClockImage() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& CombatTitleText() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& CombatDescriptionText() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& CombatTimer() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& CombatSelector() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& CombatSubsOn() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& CombatSubsOff() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& CombatTimerClockImage() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& ShieldTitleText() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& ShieldDescriptionText() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& ShieldTimer() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& ShieldImage() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& ShieldSelector() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& ShieldSubsOn() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& ShieldSubsOff() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& ShieldTimerClockImage() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& ActiveColor() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = Il2CppString*> R& _shieldCaptionKey() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = Il2CppString*> R& _shieldDescriptionKey() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = Il2CppString*> R& _shieldTimerInfinity() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = bool> R& _isRDFPBuffActive() {
		return *(R*)((uintptr_t)this + 0x178);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(RaidWindow*))(Il2CppBase() + 0x170DEF0))(this);
	}
	template <typename R = void> R CheckActiveBuffs() {
		return ((R (*)(RaidWindow*))(Il2CppBase() + 0x170E034))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(RaidWindow*))(Il2CppBase() + 0x170E57C))(this);
	}
	template <typename R = void> R OnJoinRaidButtonClicked() {
		return ((R (*)(RaidWindow*))(Il2CppBase() + 0x170E5E8))(this);
	}
	template <typename R = void> R OnStopSearchButtonClicked() {
		return ((R (*)(RaidWindow*))(Il2CppBase() + 0x170EA14))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RaidWindow*, float))(Il2CppBase() + 0x170ED74))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDrawg__updateSearchingState|38_0(uintptr_t ) {
		return ((R (*)(RaidWindow*, uintptr_t))(Il2CppBase() + 0x170F144))(this, );
	}
	template <typename R = void> R OnUpdateDrawg__updateCombatState|38_1(uintptr_t ) {
		return ((R (*)(RaidWindow*, uintptr_t))(Il2CppBase() + 0x170F750))(this, );
	}
	template <typename R = void> R OnUpdateDrawg__updateShieldState|38_2(uintptr_t ) {
		return ((R (*)(RaidWindow*, uintptr_t))(Il2CppBase() + 0x170FE34))(this, );
	}
	template <typename R = Il2CppString*> static R OnUpdateDrawg__getEstimatedSearchTimeText|38_3(float estimatedSecondsToSearch, bool isWhite) {
		return ((R (*)(void *, float, bool))(Il2CppBase() + 0x17106EC))(0, estimatedSecondsToSearch, isWhite);
	}
	template <typename R = uintptr_t> static R OnUpdateDrawg__getEstimatedSearchColor|38_4(float estimatedSecondsToSearch) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x1710B78))(0, estimatedSecondsToSearch);
	}
	template <typename R = Il2CppString*> R OnUpdateDrawg__getStopwatchSearchingTimer|38_5(int64_t startTick, uintptr_t ) {
		return ((R (*)(RaidWindow*, int64_t, uintptr_t))(Il2CppBase() + 0x17105E0))(this, startTick, );
	}

};

