#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsPanel"));
	}

	template <typename R = ChatContactContentView*> R& FavouriteContactContainer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ChatContactContentView*> R& RecentContactContainer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ChatContactView*> R& ContactPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ContactContent() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& FavouritesDescriptionText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& RecentDescriptionText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& FavouritesCounterText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& RecentCounterText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 IGroup1<ContactsEntity*>*& _unreadGroup() {
		return *(IGroup1<ContactsEntity*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = ContactsEntity*> R& _currentSelectedContact() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Action1<ContactsEntity*>*& _onContactSelected() {
		return *(Action1<ContactsEntity*>**)((uintptr_t)this + 0x68);
	}

	template <typename R = ContactsEntity*> R get_CurrentSelectedContact() {
		return ((R (*)(ContactsPanel*))(Il2CppBase() + 0x15F01C0))(this);
	}
	template <typename R = void> R set_CurrentSelectedContact(ContactsEntity* value) {
		return ((R (*)(ContactsPanel*, ContactsEntity*))(Il2CppBase() + 0x15F0210))(this, value);
	}
	template <typename R = void> R Initialize(Action1<ContactsEntity*>* onContactSelected) {
		return ((R (*)(ContactsPanel*, Action1<ContactsEntity*>*))(Il2CppBase() + 0x15F0218))(this, onContactSelected);
	}
	template <typename R = void> R Open() {
		return ((R (*)(ContactsPanel*))(Il2CppBase() + 0x15F0220))(this);
	}
	template <typename R = void> R Close() {
		return ((R (*)(ContactsPanel*))(Il2CppBase() + 0x15EBAB4))(this);
	}
	template <typename R = void> R OnContactChanged(ContactsEntity* entity) {
		return ((R (*)(ContactsPanel*, ContactsEntity*))(Il2CppBase() + 0x15F05FC))(this, entity);
	}
	template <typename R = void> R OnNewMessage(AccountEntity* account, ChatEntity* entity) {
		return ((R (*)(ContactsPanel*, AccountEntity*, ChatEntity*))(Il2CppBase() + 0x15F1328))(this, account, entity);
	}
	template <typename R = int32_t> R GetAllUnreadMessages() {
		return ((R (*)(ContactsPanel*))(Il2CppBase() + 0x15EBB1C))(this);
	}
	template <typename R = void> R ChangeContactGroup(ContactsEntity* e, bool isFavourite, bool isMuted) {
		return ((R (*)(ContactsPanel*, ContactsEntity*, bool, bool))(Il2CppBase() + 0x15F1BF4))(this, e, isFavourite, isMuted);
	}
	template <typename R = void> R OnContactSelected(ContactsEntity* e) {
		return ((R (*)(ContactsPanel*, ContactsEntity*))(Il2CppBase() + 0x15F1E78))(this, e);
	}
	template <typename R = void> R OnFavouriteStatusChanged(ContactsEntity* e, bool isOn) {
		return ((R (*)(ContactsPanel*, ContactsEntity*, bool))(Il2CppBase() + 0x15F2050))(this, e, isOn);
	}
	template <typename R = void> R OnMuteStatusChanged(ContactsEntity* e, bool isOn) {
		return ((R (*)(ContactsPanel*, ContactsEntity*, bool))(Il2CppBase() + 0x15F219C))(this, e, isOn);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R CreateGroups(bool isFavourite, bool isMuted) {
		return ((R (*)(ContactsPanel*, bool, bool))(Il2CppBase() + 0x15F1D3C))(this, isFavourite, isMuted);
	}
	template <typename R = void> R UpdateTitleTexts() {
		return ((R (*)(ContactsPanel*))(Il2CppBase() + 0x15F0264))(this);
	}

};

