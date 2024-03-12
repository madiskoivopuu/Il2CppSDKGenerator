#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsPanel"));
	}

	template <typename T = uintptr_t> T& FavouriteContactContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RecentContactContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ContactPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ContactContent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& FavouritesDescriptionText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RecentDescriptionText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& FavouritesCounterText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& RecentCounterText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _unreadGroup() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _currentSelectedContact() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _onContactSelected() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_CurrentSelectedContact() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15F01C0))(this);
	}
	template <typename T = void> T set_CurrentSelectedContact(uintptr_t value) {
		return ((T (*)(ContactsPanel*, uintptr_t))(Il2CppBase() + 0x15F0210))(this, value);
	}
	template <typename T = void> T Initialize(void* onContactSelected) {
		return ((T (*)(ContactsPanel*, void*))(Il2CppBase() + 0x15F0218))(this, onContactSelected);
	}
	template <typename T = void> T Open() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15F0220))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15EBAB4))(this);
	}
	template <typename T = void> T OnContactChanged(uintptr_t entity) {
		return ((T (*)(ContactsPanel*, uintptr_t))(Il2CppBase() + 0x15F05FC))(this, entity);
	}
	template <typename T = void> T OnNewMessage(uintptr_t account, uintptr_t entity) {
		return ((T (*)(ContactsPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x15F1328))(this, account, entity);
	}
	template <typename T = int32_t> T GetAllUnreadMessages() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15EBB1C))(this);
	}
	template <typename T = void> T ChangeContactGroup(uintptr_t e, bool isFavourite, bool isMuted) {
		return ((T (*)(ContactsPanel*, uintptr_t, bool, bool))(Il2CppBase() + 0x15F1BF4))(this, e, isFavourite, isMuted);
	}
	template <typename T = void> T OnContactSelected(uintptr_t e) {
		return ((T (*)(ContactsPanel*, uintptr_t))(Il2CppBase() + 0x15F1E78))(this, e);
	}
	template <typename T = void> T OnFavouriteStatusChanged(uintptr_t e, bool isOn) {
		return ((T (*)(ContactsPanel*, uintptr_t, bool))(Il2CppBase() + 0x15F2050))(this, e, isOn);
	}
	template <typename T = void> T OnMuteStatusChanged(uintptr_t e, bool isOn) {
		return ((T (*)(ContactsPanel*, uintptr_t, bool))(Il2CppBase() + 0x15F219C))(this, e, isOn);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateGroups(bool isFavourite, bool isMuted) {
		return ((T (*)(ContactsPanel*, bool, bool))(Il2CppBase() + 0x15F1D3C))(this, isFavourite, isMuted);
	}
	template <typename T = void> T UpdateTitleTexts() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15F0264))(this);
	}

};

}
