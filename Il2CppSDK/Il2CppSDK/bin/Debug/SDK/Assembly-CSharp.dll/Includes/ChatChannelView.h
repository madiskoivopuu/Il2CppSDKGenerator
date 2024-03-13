#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ChannelView.h" 

class ChatChannelView : public ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatChannelView"));
	}

	template <typename T = IGroup1ChatEntity*>*> T& _unreadMessages() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(UIWindow* window, ChatRoom* room, ChatChannelData* channelData, bool isSelected, Action1ChannelView*>* onClicked) {
		return ((T (*)(ChatChannelView*, UIWindow*, ChatRoom*, ChatChannelData*, bool, Action1ChannelView*>*))(Il2CppBase() + 0x13EFC1C))(this, window, room, channelData, isSelected, onClicked);
	}
	template <typename T = void> T UpdateUnreadMessages() {
		return ((T (*)(ChatChannelView*))(Il2CppBase() + 0x13F01D0))(this);
	}

};

