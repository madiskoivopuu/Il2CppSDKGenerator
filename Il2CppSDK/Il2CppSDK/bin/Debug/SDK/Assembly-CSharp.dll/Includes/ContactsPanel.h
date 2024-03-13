#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsPanel"));
	}

	template <typename T = ChatContactContentView*> T& FavouriteContactContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ChatContactContentView*> T& RecentContactContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ChatContactView*> T& ContactPrefab() {
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
	template <typename T = IGroup1ContactsEntity*>*> T& _unreadGroup() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = ContactsEntity*> T& _currentSelectedContact() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Action1ContactsEntity*>*> T& _onContactSelected() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = ContactsEntity*> T get_CurrentSelectedContact() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15F01C0))(this);
	}
	template <typename T = void> T set_CurrentSelectedContact(ContactsEntity* value) {
		return ((T (*)(ContactsPanel*, ContactsEntity*))(Il2CppBase() + 0x15F0210))(this, value);
	}
	template <typename T = void> T Initialize(Action1ContactsEntity*>* onContactSelected) {
		return ((T (*)(ContactsPanel*, Action1ContactsEntity*>*))(Il2CppBase() + 0x15F0218))(this, onContactSelected);
	}
	template <typename T = void> T Open() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15F0220))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15EBAB4))(this);
	}
	template <typename T = void> T OnContactChanged(ContactsEntity* entity) {
		return ((T (*)(ContactsPanel*, ContactsEntity*))(Il2CppBase() + 0x15F05FC))(this, entity);
	}
	template <typename T = void> T OnNewMessage(AccountEntity* account, ChatEntity* entity) {
		return ((T (*)(ContactsPanel*, AccountEntity*, ChatEntity*))(Il2CppBase() + 0x15F1328))(this, account, entity);
	}
	template <typename T = int32_t> T GetAllUnreadMessages() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15EBB1C))(this);
	}
	template <typename T = void> T ChangeContactGroup(ContactsEntity* e, bool isFavourite, bool isMuted) {
		return ((T (*)(ContactsPanel*, ContactsEntity*, bool, bool))(Il2CppBase() + 0x15F1BF4))(this, e, isFavourite, isMuted);
	}
	template <typename T = void> T OnContactSelected(ContactsEntity* e) {
		return ((T (*)(ContactsPanel*, ContactsEntity*))(Il2CppBase() + 0x15F1E78))(this, e);
	}
	template <typename T = void> T OnFavouriteStatusChanged(ContactsEntity* e, bool isOn) {
		return ((T (*)(ContactsPanel*, ContactsEntity*, bool))(Il2CppBase() + 0x15F2050))(this, e, isOn);
	}
	template <typename T = void> T OnMuteStatusChanged(ContactsEntity* e, bool isOn) {
		return ((T (*)(ContactsPanel*, ContactsEntity*, bool))(Il2CppBase() + 0x15F219C))(this, e, isOn);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateGroups(bool isFavourite, bool isMuted) {
		return ((T (*)(ContactsPanel*, bool, bool))(Il2CppBase() + 0x15F1D3C))(this, isFavourite, isMuted);
	}
	template <typename T = void> T UpdateTitleTexts() {
		return ((T (*)(ContactsPanel*))(Il2CppBase() + 0x15F0264))(this);
	}

};

