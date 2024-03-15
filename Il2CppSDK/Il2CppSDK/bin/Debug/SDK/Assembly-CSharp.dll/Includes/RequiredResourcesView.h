#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequiredResourcesView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequiredResourcesView"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeBtns() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _deskText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _bottomDeskText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _requireResourceViews() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _rewardDeskText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _hideRequiredItemsText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _rewardResourceViews() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(RequiredResourcesView*))(Il2CppBase() + 0x119895C))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(RequiredResourcesView*, TooltipView*))(Il2CppBase() + 0x1198A98))(this, tooltipView);
	}
	template <typename R = void> R Show(Il2CppString* caption, Il2CppString* desk, Il2CppString* bottomDesk, Il2CppArray<Il2CppString*>* itemIds, Il2CppString* currentClaimed) {
		return ((R (*)(RequiredResourcesView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1198AA0))(this, caption, desk, bottomDesk, itemIds, currentClaimed);
	}
	template <typename R = void> R Show_1(Il2CppString* caption, Il2CppString* desk, Il2CppString* bottomDesk, Il2CppArray<Il2CppString*>* itemIds, Il2CppString* deskSecond, Il2CppArray<Il2CppString*>* secondItemIds, Il2CppString* currentClaimed, Il2CppString* hideLine) {
		return ((R (*)(RequiredResourcesView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1199228))(this, caption, desk, bottomDesk, itemIds, deskSecond, secondItemIds, currentClaimed, hideLine);
	}
	template <typename R = void> R Awakeb__9_0() {
		return ((R (*)(RequiredResourcesView*))(Il2CppBase() + 0x11998DC))(this);
	}

};

