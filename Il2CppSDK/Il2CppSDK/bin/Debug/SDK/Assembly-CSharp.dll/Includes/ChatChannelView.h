#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ChannelView.h" 

class ChatChannelView : public ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatChannelView"));
	}

	 IGroup1ChatEntity*>*& _unreadMessages() {
		return *(IGroup1ChatEntity*>**)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Init(UIWindow* window, ChatRoom* room, ChatChannelData* channelData, bool isSelected, Action1ChannelView*>* onClicked) {
		return ((R (*)(ChatChannelView*, UIWindow*, ChatRoom*, ChatChannelData*, bool, Action1ChannelView*>*))(Il2CppBase() + 0x13EFC1C))(this, window, room, channelData, isSelected, onClicked);
	}
	template <typename R = void> R UpdateUnreadMessages() {
		return ((R (*)(ChatChannelView*))(Il2CppBase() + 0x13F01D0))(this);
	}

};

