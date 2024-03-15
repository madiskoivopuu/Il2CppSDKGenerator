#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ChannelView.h" 

class ContactsChannelView : public ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsChannelView"));
	}

	template <typename R = ContactsPanel*> R& _contactsPanel() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Init(UIWindow* window, ContactsPanel* contactsPanel, ChatRoom* room, ChatChannelData* channelData, Action1<ChannelView*>* onClicked) {
		return ((R (*)(ContactsChannelView*, UIWindow*, ContactsPanel*, ChatRoom*, ChatChannelData*, Action1<ChannelView*>*))(Il2CppBase() + 0x15EBA1C))(this, window, contactsPanel, room, channelData, onClicked);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(ContactsChannelView*))(Il2CppBase() + 0x15EBA84))(this);
	}
	template <typename R = void> R UpdateUnreadMessages() {
		return ((R (*)(ContactsChannelView*))(Il2CppBase() + 0x15EBAE4))(this);
	}

};

