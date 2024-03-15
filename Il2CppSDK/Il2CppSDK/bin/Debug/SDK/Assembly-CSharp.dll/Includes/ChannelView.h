#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChannelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelView"));
	}

	template <typename R = ChatChannelData*> R& ChannelData() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ChatRoom*> R& Room() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& UnreadMessagesParent() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& UnreadMessagesText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> static R& _interval() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& _unreadMessages() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _lastUpdate() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Action1<ChannelView*>*& _onClicked() {
		return *(Action1<ChannelView*>**)((uintptr_t)this + 0x58);
	}

	template <typename R = int32_t> R get_UnreadMessages() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EBD60))(this);
	}
	template <typename R = void> R set_UnreadMessages(int32_t value) {
		return ((R (*)(ChannelView*, int32_t))(Il2CppBase() + 0x13EBD68))(this, value);
	}
	template <typename R = void> R Init(UIWindow* window, ChatRoom* room, ChatChannelData* channelData, bool isSelected, Action1<ChannelView*>* onClicked) {
		return ((R (*)(ChannelView*, UIWindow*, ChatRoom*, ChatChannelData*, bool, Action1<ChannelView*>*))(Il2CppBase() + 0x13EBDDC))(this, window, room, channelData, isSelected, onClicked);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EC0D0))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EC1CC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EC258))(this);
	}
	template <typename R = void> R UpdateDraw(float delta) {
		return ((R (*)(ChannelView*, float))(Il2CppBase() + 0x13EC280))(this, delta);
	}
	template <typename R = void> R UpdateUnreadMessages() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EC2AC))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EC2B0))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(ChannelView*))(Il2CppBase() + 0x13EC3A8))(this);
	}

};

