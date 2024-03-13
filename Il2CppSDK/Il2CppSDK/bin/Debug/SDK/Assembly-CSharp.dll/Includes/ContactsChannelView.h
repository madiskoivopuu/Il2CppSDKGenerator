#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ChannelView.h" 

class ContactsChannelView : public ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsChannelView"));
	}

	template <typename T = ContactsPanel*> T& _contactsPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(UIWindow* window, ContactsPanel* contactsPanel, ChatRoom* room, ChatChannelData* channelData, Action1ChannelView*>* onClicked) {
		return ((T (*)(ContactsChannelView*, UIWindow*, ContactsPanel*, ChatRoom*, ChatChannelData*, Action1ChannelView*>*))(Il2CppBase() + 0x15EBA1C))(this, window, contactsPanel, room, channelData, onClicked);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(ContactsChannelView*))(Il2CppBase() + 0x15EBA84))(this);
	}
	template <typename T = void> T UpdateUnreadMessages() {
		return ((T (*)(ContactsChannelView*))(Il2CppBase() + 0x15EBAE4))(this);
	}

};

