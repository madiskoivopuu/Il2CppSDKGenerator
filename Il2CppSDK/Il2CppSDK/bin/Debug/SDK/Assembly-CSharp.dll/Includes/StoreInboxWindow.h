#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreInboxWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreInboxWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ProductsContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& StoreInboxEmptyLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = DynamicVScrollView*> T& DVInboxScroll() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& InboxScrollButtons() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& InboxScrollButtonsContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& FilteringPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& FPWeaponToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& FPArmorToggle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& FPConsumableToggle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& FPChestsToggle() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& FPResourcesToggle() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& FPMountsToggle() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& FPRunesToggle() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& FPCosmeticsToggle() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = ToggleSpriteSwap*> T& SortToggle() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = MailFilter*> T& _currentMailFilter() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = StoreData*> static T& Data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& OnWindowWasUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& _selectedInboxScrollButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreInboxWindow*))(Il2CppBase() + 0x1424CDC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(StoreInboxWindow*))(Il2CppBase() + 0x1425604))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StoreInboxWindow*))(Il2CppBase() + 0x14256AC))(this);
	}
	template <typename T = void> T OnFilterValueChanged(MailFilter* filter, bool isOn) {
		return ((T (*)(StoreInboxWindow*, MailFilter*, bool))(Il2CppBase() + 0x1425754))(this, filter, isOn);
	}
	template <typename T = uintptr_t> T ResetInboxScroll() {
		return ((T (*)(StoreInboxWindow*))(Il2CppBase() + 0x14257A0))(this);
	}
	template <typename T = void> T OnSortToggleValueChanged(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x1425818))(this, isOn);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreInboxWindow*))(Il2CppBase() + 0x1425820))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StoreInboxWindow*, float))(Il2CppBase() + 0x14258DC))(this, deltaTime);
	}
	template <typename T = void> T OnInboxScrollButtonClicked(float y) {
		return ((T (*)(StoreInboxWindow*, float))(Il2CppBase() + 0x1425AE0))(this, y);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFilteredMailEntities() {
		return ((T (*)(StoreInboxWindow*))(Il2CppBase() + 0x1425B0C))(this);
	}
	template <typename T = void> T OnCategoryClick(bool resetScroll) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x1425170))(this, resetScroll);
	}
	template <typename T = void> T OnStoreInboxItemClicked(int64_t messageId, Action1Il2CppString*>* onError) {
		return ((T (*)(StoreInboxWindow*, int64_t, Action1Il2CppString*>*))(Il2CppBase() + 0x1426248))(this, messageId, onError);
	}
	template <typename T = void> T OnStoreInboxItemExpired(int64_t messageId) {
		return ((T (*)(StoreInboxWindow*, int64_t))(Il2CppBase() + 0x142709C))(this, messageId);
	}
	template <typename T = void> T OnShowb__24_0(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272B0))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_1(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272BC))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_2(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272C8))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_3(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272D4))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_4(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272E0))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_5(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272EC))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_6(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x14272F8))(this, isOn);
	}
	template <typename T = void> T OnShowb__24_7(bool isOn) {
		return ((T (*)(StoreInboxWindow*, bool))(Il2CppBase() + 0x1427304))(this, isOn);
	}
	template <typename T = bool> T GetFilteredMailEntitiesg__isNotFiltered|33_7(MailEntity* e) {
		return ((T (*)(StoreInboxWindow*, MailEntity*))(Il2CppBase() + 0x1427310))(this, e);
	}
	template <typename T = KeyValuePair2int32_t, MessageData*>*> T OnCategoryClickb__34_0(MailEntity* e, int32_t i) {
		return ((T (*)(StoreInboxWindow*, MailEntity*, int32_t))(Il2CppBase() + 0x1427904))(this, e, i);
	}

};

