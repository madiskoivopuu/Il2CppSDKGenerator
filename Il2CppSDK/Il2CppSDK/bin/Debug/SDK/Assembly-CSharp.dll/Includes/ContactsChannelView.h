#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ChannelView" 

class ContactsChannelView: ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactsChannelView"));
	}

	template <typename T = uintptr_t> T& _contactsPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(uintptr_t window, uintptr_t contactsPanel, uintptr_t room, uintptr_t channelData, void* onClicked) {
		return ((T (*)(ContactsChannelView*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x15EBA1C))(this, window, contactsPanel, room, channelData, onClicked);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(ContactsChannelView*))(Il2CppBase() + 0x15EBA84))(this);
	}
	template <typename T = void> T UpdateUnreadMessages() {
		return ((T (*)(ContactsChannelView*))(Il2CppBase() + 0x15EBAE4))(this);
	}

};

}
