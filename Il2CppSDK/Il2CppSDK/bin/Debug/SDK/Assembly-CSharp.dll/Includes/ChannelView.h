#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelView"));
	}

	template <typename T = ChatChannelData*> T& ChannelData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = ChatRoom*> T& Room() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& UnreadMessagesParent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& UnreadMessagesText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& _interval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _unreadMessages() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _lastUpdate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = UIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Action1ChannelView*>*> T& _onClicked() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_UnreadMessages() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EBD60))(this);
	}
	template <typename T = void> T set_UnreadMessages(int32_t value) {
		return ((T (*)(ChannelView*, int32_t))(Il2CppBase() + 0x13EBD68))(this, value);
	}
	template <typename T = void> T Init(UIWindow* window, ChatRoom* room, ChatChannelData* channelData, bool isSelected, Action1ChannelView*>* onClicked) {
		return ((T (*)(ChannelView*, UIWindow*, ChatRoom*, ChatChannelData*, bool, Action1ChannelView*>*))(Il2CppBase() + 0x13EBDDC))(this, window, room, channelData, isSelected, onClicked);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EC0D0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EC1CC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EC258))(this);
	}
	template <typename T = void> T UpdateDraw(float delta) {
		return ((T (*)(ChannelView*, float))(Il2CppBase() + 0x13EC280))(this, delta);
	}
	template <typename T = void> T UpdateUnreadMessages() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EC2AC))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EC2B0))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(ChannelView*))(Il2CppBase() + 0x13EC3A8))(this);
	}

};

