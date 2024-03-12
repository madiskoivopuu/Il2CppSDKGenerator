#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequiredResourcesView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequiredResourcesView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeBtns() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _deskText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _bottomDeskText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _requireResourceViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _rewardDeskText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _hideRequiredItemsText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardResourceViews() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RequiredResourcesView*))(Il2CppBase() + 0x119895C))(this);
	}
	template <typename T = void> T Init(uintptr_t tooltipView) {
		return ((T (*)(RequiredResourcesView*, uintptr_t))(Il2CppBase() + 0x1198A98))(this, tooltipView);
	}
	template <typename T = void> T Show(Il2CppString* caption, Il2CppString* desk, Il2CppString* bottomDesk, Il2CppArray<uintptr_t>* itemIds, Il2CppString* currentClaimed) {
		return ((T (*)(RequiredResourcesView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1198AA0))(this, caption, desk, bottomDesk, itemIds, currentClaimed);
	}
	template <typename T = void> T Show_1(Il2CppString* caption, Il2CppString* desk, Il2CppString* bottomDesk, Il2CppArray<uintptr_t>* itemIds, Il2CppString* deskSecond, Il2CppArray<uintptr_t>* secondItemIds, Il2CppString* currentClaimed, Il2CppString* hideLine) {
		return ((T (*)(RequiredResourcesView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1199228))(this, caption, desk, bottomDesk, itemIds, deskSecond, secondItemIds, currentClaimed, hideLine);
	}
	template <typename T = void> T Awakeb__9_0() {
		return ((T (*)(RequiredResourcesView*))(Il2CppBase() + 0x11998DC))(this);
	}

};

}
