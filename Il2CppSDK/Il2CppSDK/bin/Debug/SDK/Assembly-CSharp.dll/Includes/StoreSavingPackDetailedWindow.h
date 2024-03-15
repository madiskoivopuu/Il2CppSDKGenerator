#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreSavingPackDetailedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSavingPackDetailedWindow"));
	}

	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& PackDescription() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ProgressDescription() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& VIPPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& VIPText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& XBonusPanel() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& XBonusText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StoreProductContentSlotView*> R& ProductContentItemPrefab() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& PackContainer() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = TextImageMonoBehaviour*> R& ProgressText() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& ProgressImage() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& ProgressUnlockPanel() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& ProgressAlreadyUnlockedPanel() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = StoreProductContentSlotView*> R& NextUnlock() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& LimitedCountLeft() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& CountText() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = Il2CppString*> static R& PROGRESS_TEXT_FORMAT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x1842330))(this);
	}
	template <typename R = void> R InitProgress(uint32_t currentExp, Il2CppArray<uint32_t>* needXp, Il2CppString* iconName) {
		return ((R (*)(StoreSavingPackDetailedWindow*, uint32_t, Il2CppArray<uint32_t>*, Il2CppString*))(Il2CppBase() + 0x1843C60))(this, currentExp, needXp, iconName);
	}
	template <typename R = void> R GetSavingPackData(Il2CppArray<uint32_t>* needXp, uint32_t currentStoreExp, uintptr_t* currentStoreEntityXp, uintptr_t* nextStoreEntityXp) {
		return ((R (*)(StoreSavingPackDetailedWindow*, Il2CppArray<uint32_t>*, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1843E38))(this, needXp, currentStoreExp, currentStoreEntityXp, nextStoreEntityXp);
	}
	template <typename R = void> R OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((R (*)(StoreSavingPackDetailedWindow*, int32_t))(Il2CppBase() + 0x184404C))(this, buyButtonIndex);
	}
	template <typename R = void> R OnCloseButtonClick() {
		return ((R (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x1844870))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x18448DC))(this);
	}
	template <typename R = void> R SetProgressUnlockVisibility(bool visible) {
		return ((R (*)(StoreSavingPackDetailedWindow*, bool))(Il2CppBase() + 0x184402C))(this, visible);
	}
	template <typename R = void> R SetProgressAlreadyUnlockedVisibility(bool visible) {
		return ((R (*)(StoreSavingPackDetailedWindow*, bool))(Il2CppBase() + 0x184400C))(this, visible);
	}
	template <typename R = void> R OnShowb__22_0() {
		return ((R (*)(StoreSavingPackDetailedWindow*))(Il2CppBase() + 0x1844980))(this);
	}

};

