#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ChannelView" 

class ChatChannelView: ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatChannelView"));
	}

	template <typename T = void*> T& _unreadMessages() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(uintptr_t window, uintptr_t room, uintptr_t channelData, bool isSelected, void* onClicked) {
		return ((T (*)(ChatChannelView*, uintptr_t, uintptr_t, uintptr_t, bool, void*))(Il2CppBase() + 0x13EFC1C))(this, window, room, channelData, isSelected, onClicked);
	}
	template <typename T = void> T UpdateUnreadMessages() {
		return ((T (*)(ChatChannelView*))(Il2CppBase() + 0x13F01D0))(this);
	}

};

}
