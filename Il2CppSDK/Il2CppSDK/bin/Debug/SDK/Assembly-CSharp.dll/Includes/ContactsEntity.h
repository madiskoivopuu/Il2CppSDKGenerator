#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContactsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsEntity"));
	}

	template <typename T = uintptr_t> static T& favouriteComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& muteComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED0F8))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED180))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED18C))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED294))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED39C))(this);
	}
	template <typename T = uintptr_t> T get_contactOnline() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED3A8))(this);
	}
	template <typename T = bool> T get_hasContactOnline() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED430))(this);
	}
	template <typename T = void> T AddContactOnline(bool newValue) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED43C))(this, newValue);
	}
	template <typename T = void> T ReplaceContactOnline(bool newValue) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED544))(this, newValue);
	}
	template <typename T = void> T RemoveContactOnline() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED64C))(this);
	}
	template <typename T = uintptr_t> T get_contactView() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED658))(this);
	}
	template <typename T = bool> T get_hasContactView() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED6E0))(this);
	}
	template <typename T = void> T AddContactView(uintptr_t newView) {
		return ((T (*)(ContactsEntity*, uintptr_t))(Il2CppBase() + 0x15ED6EC))(this, newView);
	}
	template <typename T = void> T ReplaceContactView(uintptr_t newView) {
		return ((T (*)(ContactsEntity*, uintptr_t))(Il2CppBase() + 0x15ED800))(this, newView);
	}
	template <typename T = void> T RemoveContactView() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED914))(this);
	}
	template <typename T = bool> T get_isFavourite() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15ED920))(this);
	}
	template <typename T = void> T set_isFavourite(bool value) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15ED92C))(this, value);
	}
	template <typename T = uintptr_t> T get_groups() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDA44))(this);
	}
	template <typename T = bool> T get_hasGroups() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDACC))(this);
	}
	template <typename T = void> T AddGroups(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ContactsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15EDAD8))(this, newNames);
	}
	template <typename T = void> T ReplaceGroups(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ContactsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15EDBEC))(this, newNames);
	}
	template <typename T = void> T RemoveGroups() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDD00))(this);
	}
	template <typename T = uintptr_t> T get_jid() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDD0C))(this);
	}
	template <typename T = bool> T get_hasJid() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDD94))(this);
	}
	template <typename T = void> T AddJid(Il2CppString* newValue) {
		return ((T (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EDDA0))(this, newValue);
	}
	template <typename T = void> T ReplaceJid(Il2CppString* newValue) {
		return ((T (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EDEB4))(this, newValue);
	}
	template <typename T = void> T RemoveJid() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDFC8))(this);
	}
	template <typename T = uintptr_t> T get_lastOpenedChat() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EDFD4))(this);
	}
	template <typename T = bool> T get_hasLastOpenedChat() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE05C))(this);
	}
	template <typename T = void> T AddLastOpenedChat(int64_t newValue) {
		return ((T (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EE068))(this, newValue);
	}
	template <typename T = void> T ReplaceLastOpenedChat(int64_t newValue) {
		return ((T (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EE16C))(this, newValue);
	}
	template <typename T = void> T RemoveLastOpenedChat() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE270))(this);
	}
	template <typename T = bool> T get_isMute() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE27C))(this);
	}
	template <typename T = void> T set_isMute(bool value) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15EE288))(this, value);
	}
	template <typename T = uintptr_t> T get_playerName() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE3A0))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE428))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EE434))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(ContactsEntity*, Il2CppString*))(Il2CppBase() + 0x15EE548))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE65C))(this);
	}
	template <typename T = uintptr_t> T get_subscription() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE668))(this);
	}
	template <typename T = bool> T get_hasSubscription() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE6F0))(this);
	}
	template <typename T = void> T AddSubscription(bool newValue) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15EE6FC))(this, newValue);
	}
	template <typename T = void> T ReplaceSubscription(bool newValue) {
		return ((T (*)(ContactsEntity*, bool))(Il2CppBase() + 0x15EE804))(this, newValue);
	}
	template <typename T = void> T RemoveSubscription() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE90C))(this);
	}
	template <typename T = uintptr_t> T get_tick() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE918))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EE9A0))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EE9AC))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(ContactsEntity*, int64_t))(Il2CppBase() + 0x15EEAB0))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(ContactsEntity*))(Il2CppBase() + 0x15EEBB4))(this);
	}

};

}
