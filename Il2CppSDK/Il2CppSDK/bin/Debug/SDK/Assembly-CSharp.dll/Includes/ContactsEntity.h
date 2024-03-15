#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsEntity"));
	}

	template <typename R = FavouriteComponent*> static R& favouriteComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = MuteComponent*> static R& muteComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED0F8))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED180))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED18C))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED294))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED39C))(this);
	}
	template <typename R = ContactOnlineComponent*> R get_contactOnline() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED3A8))(this);
	}
	template <typename R = bool> R get_hasContactOnline() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED430))(this);
	}
	template <typename R = void> R AddContactOnline(bool newValue) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED43C))(this, newValue);
	}
	template <typename R = void> R ReplaceContactOnline(bool newValue) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED544))(this, newValue);
	}
	template <typename R = void> R RemoveContactOnline() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED64C))(this);
	}
	template <typename R = ContactViewComponent*> R get_contactView() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED658))(this);
	}
	template <typename R = bool> R get_hasContactView() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED6E0))(this);
	}
	template <typename R = void> R AddContactView(ChatContactView* newView) {
		return ((R (*)(ContactsEntity*, ChatContactView*))(Il2CppBase() + 0x15ED6EC))(this, newView);
	}
	template <typename R = void> R ReplaceContactView(ChatContactView* newView) {
		return ((R (*)(ContactsEntity*, ChatContactView*))(Il2CppBase() + 0x15ED800))(this, newView);
	}
	template <typename R = void> R RemoveContactView() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED914))(this);
	}
	template <typename R = bool> R get_isFavourite() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15ED920))(this);
	}
	template <typename R = void> R set_isFavourite(bool value) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED92C))(this, value);
	}
	template <typename R = Groups*> R get_groups() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDA44))(this);
	}
	template <typename R = bool> R get_hasGroups() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDACC))(this);
	}
	template <typename R = void> R AddGroups(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ContactsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15EDAD8))(this, newNames);
	}
	template <typename R = void> R ReplaceGroups(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ContactsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15EDBEC))(this, newNames);
	}
	template <typename R = void> R RemoveGroups() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDD00))(this);
	}
	template <typename R = JidComponent*> R get_jid() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDD0C))(this);
	}
	template <typename R = bool> R get_hasJid() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDD94))(this);
	}
	template <typename R = void> R AddJid(Il2CppString* newValue) {
		return ((R (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EDDA0))(this, newValue);
	}
	template <typename R = void> R ReplaceJid(Il2CppString* newValue) {
		return ((R (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EDEB4))(this, newValue);
	}
	template <typename R = void> R RemoveJid() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDFC8))(this);
	}
	template <typename R = LastOpenedChatComponent*> R get_lastOpenedChat() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EDFD4))(this);
	}
	template <typename R = bool> R get_hasLastOpenedChat() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE05C))(this);
	}
	template <typename R = void> R AddLastOpenedChat(int64_t newValue) {
		return ((R (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EE068))(this, newValue);
	}
	template <typename R = void> R ReplaceLastOpenedChat(int64_t newValue) {
		return ((R (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EE16C))(this, newValue);
	}
	template <typename R = void> R RemoveLastOpenedChat() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE270))(this);
	}
	template <typename R = bool> R get_isMute() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE27C))(this);
	}
	template <typename R = void> R set_isMute(bool value) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15EE288))(this, value);
	}
	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE3A0))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE428))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EE434))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EE548))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE65C))(this);
	}
	template <typename R = SubscriptionComponent*> R get_subscription() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE668))(this);
	}
	template <typename R = bool> R get_hasSubscription() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE6F0))(this);
	}
	template <typename R = void> R AddSubscription(bool newValue) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15EE6FC))(this, newValue);
	}
	template <typename R = void> R ReplaceSubscription(bool newValue) {
		return ((R (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15EE804))(this, newValue);
	}
	template <typename R = void> R RemoveSubscription() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE90C))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE918))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EE9A0))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EE9AC))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EEAB0))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(ContactsEntity*))(Il2CppBase() + 0x15EEBB4))(this);
	}

};

