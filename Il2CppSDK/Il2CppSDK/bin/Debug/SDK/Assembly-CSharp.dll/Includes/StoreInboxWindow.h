#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreInboxWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreInboxWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ProductsContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& StoreInboxEmptyLabel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Mosframe::DynamicVScrollView*> R& DVInboxScroll() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& InboxScrollButtons() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& InboxScrollButtonsContainer() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& FilteringPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& FPWeaponToggle() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& FPArmorToggle() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& FPConsumableToggle() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& FPChestsToggle() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& FPResourcesToggle() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& FPMountsToggle() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& FPRunesToggle() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& FPCosmeticsToggle() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = ToggleSpriteSwap*> R& SortToggle() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = MailFilter> R& _currentMailFilter() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = StoreData> static R& Data() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& OnWindowWasUpdated() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> R& _selectedInboxScrollButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreInboxWindow*))(Il2CppBase() + 0x1424CDC))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(StoreInboxWindow*))(Il2CppBase() + 0x1425604))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(StoreInboxWindow*))(Il2CppBase() + 0x14256AC))(this);
	}
	template <typename R = void> R OnFilterValueChanged(MailFilter filter, bool isOn) {
		return ((R (*)(StoreInboxWindow*, MailFilter, bool))(Il2CppBase() + 0x1425754))(this, filter, isOn);
	}
	template <typename R = uintptr_t> R ResetInboxScroll() {
		return ((R (*)(StoreInboxWindow*))(Il2CppBase() + 0x14257A0))(this);
	}
	template <typename R = void> R OnSortToggleValueChanged(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x1425818))(this, isOn);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreInboxWindow*))(Il2CppBase() + 0x1425820))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StoreInboxWindow*, float))(Il2CppBase() + 0x14258DC))(this, deltaTime);
	}
	template <typename R = void> R OnInboxScrollButtonClicked(float y) {
		return ((R (*)(StoreInboxWindow*, float))(Il2CppBase() + 0x1425AE0))(this, y);
	}
	template <typename R = Il2CppArray<MailEntity*>*> R GetFilteredMailEntities() {
		return ((R (*)(StoreInboxWindow*))(Il2CppBase() + 0x1425B0C))(this);
	}
	template <typename R = void> R OnCategoryClick(bool resetScroll) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x1425170))(this, resetScroll);
	}
	template <typename R = void> R OnStoreInboxItemClicked(int64_t messageId, Action1<Il2CppString*>* onError) {
		return ((R (*)(StoreInboxWindow*, int64_t, Action1<Il2CppString*>*))(Il2CppBase() + 0x1426248))(this, messageId, onError);
	}
	template <typename R = void> R OnStoreInboxItemExpired(int64_t messageId) {
		return ((R (*)(StoreInboxWindow*, int64_t))(Il2CppBase() + 0x142709C))(this, messageId);
	}
	template <typename R = void> R OnShowb__24_0(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272B0))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_1(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272BC))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_2(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272C8))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_3(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272D4))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_4(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272E0))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_5(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272EC))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_6(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272F8))(this, isOn);
	}
	template <typename R = void> R OnShowb__24_7(bool isOn) {
		return ((R (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x1427304))(this, isOn);
	}
	template <typename R = bool> R GetFilteredMailEntitiesg__isNotFiltered|33_7(MailEntity* e) {
		return ((R (*)(StoreInboxWindow*, MailEntity*))(Il2CppBase() + 0x1427310))(this, e);
	}
	 KeyValuePair2<int32_t, MessageData>* OnCategoryClickb__34_0(MailEntity* e, int32_t i) {
		return ((KeyValuePair2<int32_t, MessageData>* (*)(StoreInboxWindow*, MailEntity*, int32_t))(Il2CppBase() + 0x1427904))(this, e, i);
	}

};

