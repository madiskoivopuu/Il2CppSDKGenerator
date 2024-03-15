#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ChatWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatWindow"));
	}

	template <typename R = uintptr_t> R& ChatPanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ChatInputField*> R& ChatInputField() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = HUDChatButton*> R& OpenChatButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CloseChatButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& SendMessageButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ToggleChatButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& BackChatButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& OpenChatScroll() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& OpenedChatBackgroundImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& OpenChatButtonGraphics() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _openChatButtonRotation() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _closeChatButtonRotation() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& ChannelName() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& ChannelsContainer() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = ChatChannelView*> R& channelPrefab() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = ContactsChannelView*> R& ContactsChannelPrefab() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& MessagesContainer() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = ChatMessageView*> R& MessagePrefab() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& CaptionOnlineToggle() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = ContactsPanel*> R& ContactsPanel() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& TotalUnreadMessagesText() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& UnreadMessagesAnimator() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& ChatBackgroundAnimator() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = Il2CppArray<ChatChannelData*>*> R& ChatChannelDatas() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = int32_t> static R& _badgeNewTrigger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _badgeClearTrigger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = int32_t> static R& _badgeClanMessageBool() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = int32_t> static R& _badgeOldMessageBool() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename R = int32_t> static R& _badgeHideBool() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = int32_t> static R& _backgroundNewMessageTrigger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename R = int32_t> R& _wasUnreadMessages() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	 Il2CppList<ChannelView*>*& _channelViews() {
		return *(Il2CppList<ChannelView*>**)((uintptr_t)this + 0x158);
	}
	template <typename R = int32_t> R& _totalUnreadMessages() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = bool> R& _isOpen() {
		return *(R*)((uintptr_t)this + 0x164);
	}
	template <typename R = ChannelView*> R& _currentChannel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = ChatChannelData*> R& _currentSelectedDataChannel() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = IHUDWindow*> R& _hud() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = bool> R& _isHudInCustomizationMode() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = float> R& _nextUpdate() {
		return *(R*)((uintptr_t)this + 0x18C);
	}

	template <typename R = int32_t> R get_TotalUnreadMessages() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1737034))(this);
	}
	template <typename R = void> R set_TotalUnreadMessages(int32_t value) {
		return ((R (*)(ChatWindow*, int32_t))(Il2CppBase() + 0x173703C))(this, value);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1737144))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ChatWindow*, float))(Il2CppBase() + 0x1738598))(this, deltaTime);
	}
	template <typename R = void> R OnHUDSwitchCustomizationMode(bool isOn) {
		return ((R (*)(ChatWindow*, bool))(Il2CppBase() + 0x1738CBC))(this, isOn);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1738CD4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1738DF4))(this);
	}
	template <typename R = void> R UpdateSelectedChannelName() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1738EA8))(this);
	}
	template <typename R = void> R UpdateTotalUnreadMessages() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1738644))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173903C))(this);
	}
	template <typename R = void> R UpdateRooms() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x1737AAC))(this);
	}
	template <typename R = void> R OnFocusChanged(bool isFocused) {
		return ((R (*)(ChatWindow*, bool))(Il2CppBase() + 0x1737920))(this, isFocused);
	}
	template <typename R = void> R UpdateChatOpenClosed(bool isOpen) {
		return ((R (*)(ChatWindow*, bool))(Il2CppBase() + 0x173A1F0))(this, isOpen);
	}
	template <typename R = void> R OnContactsChannelSelected(ChannelView* channel) {
		return ((R (*)(ChatWindow*, ChannelView*))(Il2CppBase() + 0x173904C))(this, channel);
	}
	template <typename R = void> R OnContactSelected(ContactsEntity* entity) {
		return ((R (*)(ChatWindow*, ContactsEntity*))(Il2CppBase() + 0x173AD70))(this, entity);
	}
	template <typename R = void> R OnChatChannelSelected(ChannelView* channel) {
		return ((R (*)(ChatWindow*, ChannelView*))(Il2CppBase() + 0x1739388))(this, channel);
	}
	template <typename R = void> R CreateBubble(ChatEntity* e) {
		return ((R (*)(ChatWindow*, ChatEntity*))(Il2CppBase() + 0x173B6E8))(this, e);
	}
	template <typename R = void> R SendChatMessage(Il2CppString* message) {
		return ((R (*)(ChatWindow*, Il2CppString*))(Il2CppBase() + 0x173B8B4))(this, message);
	}
	template <typename R = void> R OnContactUpdate(ContactsEntity* e) {
		return ((R (*)(ChatWindow*, ContactsEntity*))(Il2CppBase() + 0x173C180))(this, e);
	}
	template <typename R = void> R OnNewMessage(ChatEntity* e) {
		return ((R (*)(ChatWindow*, ChatEntity*))(Il2CppBase() + 0x1735554))(this, e);
	}
	template <typename R = void> R RemoveCurrentChatChannelMessageViews() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173A848))(this);
	}
	template <typename R = void> R SwitchChatPanael(bool isOn) {
		return ((R (*)(ChatWindow*, bool))(Il2CppBase() + 0x173C1E8))(this, isOn);
	}
	template <typename R = void> R HideAllMessages(bool hide) {
		return ((R (*)(ChatWindow*, bool))(Il2CppBase() + 0x173C4D8))(this, hide);
	}
	template <typename R = void> R OnShowb__44_0() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173C9B0))(this);
	}
	template <typename R = void> R OnShowb__44_1() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173C9D8))(this);
	}
	template <typename R = void> R OnShowb__44_2() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173C9E8))(this);
	}
	template <typename R = void> R OnShowb__44_3() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173C9F4))(this);
	}
	template <typename R = void> R OnShowb__44_4() {
		return ((R (*)(ChatWindow*))(Il2CppBase() + 0x173CA0C))(this);
	}

};

