#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreSavingPackDetailedWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSavingPackDetailedWindow"));
	}

	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PackDescription() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ProgressDescription() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& XBonusPanel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& XBonusText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ProductContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PackContainer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ProgressText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ProgressImage() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ProgressUnlockPanel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ProgressAlreadyUnlockedPanel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& NextUnlock() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LimitedCountLeft() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& CountText() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> static T& PROGRESS_TEXT_FORMAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x1842330))(this);
	}
	template <typename T = void> T InitProgress(uint32_t currentExp, Il2CppArray<uintptr_t>* needXp, Il2CppString* iconName) {
		return ((T (*)(StoreSavingPackDetailedWindow*, uint32_t, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1843C60))(this, currentExp, needXp, iconName);
	}
	template <typename T = void> T GetSavingPackData(Il2CppArray<uintptr_t>* needXp, uint32_t currentStoreExp, uintptr_t* currentStoreEntityXp, uintptr_t* nextStoreEntityXp) {
		return ((T (*)(StoreSavingPackDetailedWindow*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1843E38))(this, needXp, currentStoreExp, currentStoreEntityXp, nextStoreEntityXp);
	}
	template <typename T = void> T OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((T (*)(StoreSavingPackDetailedWindow*, int32_t))(Il2CppBase() + 0x184404C))(this, buyButtonIndex);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x1844870))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x18448DC))(this);
	}
	template <typename T = void> T SetProgressUnlockVisibility(bool visible) {
		return ((T (*)(StoreSavingPackDetailedWindow*, bool))(Il2CppBase() + 0x184402C))(this, visible);
	}
	template <typename T = void> T SetProgressAlreadyUnlockedVisibility(bool visible) {
		return ((T (*)(StoreSavingPackDetailedWindow*, bool))(Il2CppBase() + 0x184400C))(this, visible);
	}
	template <typename T = void> T OnShowb__22_0() {
		return ((T (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x1844980))(this);
	}

};

}
