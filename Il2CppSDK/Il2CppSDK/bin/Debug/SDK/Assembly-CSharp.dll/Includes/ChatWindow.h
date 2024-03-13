#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ChatWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatWindow"));
	}

	template <typename T = uintptr_t> T& ChatPanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = ChatInputField*> T& ChatInputField() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = HUDChatButton*> T& OpenChatButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseChatButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SendMessageButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ToggleChatButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BackChatButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& OpenChatScroll() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OpenedChatBackgroundImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& OpenChatButtonGraphics() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _openChatButtonRotation() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _closeChatButtonRotation() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ChannelName() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ChannelsContainer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = ChatChannelView*> T& channelPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = ContactsChannelView*> T& ContactsChannelPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& MessagesContainer() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = ChatMessageView*> T& MessagePrefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CaptionOnlineToggle() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = ContactsPanel*> T& ContactsPanel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& TotalUnreadMessagesText() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& UnreadMessagesAnimator() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ChatBackgroundAnimator() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChatChannelDatas() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> static T& _badgeNewTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _badgeClearTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& _badgeClanMessageBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& _badgeOldMessageBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& _badgeHideBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& _backgroundNewMessageTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> T& _wasUnreadMessages() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppList<ChannelView*>*> T& _channelViews() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& _totalUnreadMessages() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& _isOpen() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = ChannelView*> T& _currentChannel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = ChatChannelData*> T& _currentSelectedDataChannel() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = IHUDWindow*> T& _hud() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& _isHudInCustomizationMode() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& _nextUpdate() {
		return *(T*)((uintptr_t)this + 0x18C);
	}

	template <typename T = int32_t> T get_TotalUnreadMessages() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1737034))(this);
	}
	template <typename T = void> T set_TotalUnreadMessages(int32_t value) {
		return ((T (*)(ChatWindow*, int32_t))(Il2CppBase() + 0x173703C))(this, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1737144))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ChatWindow*, float))(Il2CppBase() + 0x1738598))(this, deltaTime);
	}
	template <typename T = void> T OnHUDSwitchCustomizationMode(bool isOn) {
		return ((T (*)(ChatWindow*, bool))(Il2CppBase() + 0x1738CBC))(this, isOn);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1738CD4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1738DF4))(this);
	}
	template <typename T = void> T UpdateSelectedChannelName() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1738EA8))(this);
	}
	template <typename T = void> T UpdateTotalUnreadMessages() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1738644))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173903C))(this);
	}
	template <typename T = void> T UpdateRooms() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x1737AAC))(this);
	}
	template <typename T = void> T OnFocusChanged(bool isFocused) {
		return ((T (*)(ChatWindow*, bool))(Il2CppBase() + 0x1737920))(this, isFocused);
	}
	template <typename T = void> T UpdateChatOpenClosed(bool isOpen) {
		return ((T (*)(ChatWindow*, bool))(Il2CppBase() + 0x173A1F0))(this, isOpen);
	}
	template <typename T = void> T OnContactsChannelSelected(ChannelView* channel) {
		return ((T (*)(ChatWindow*, ChannelView*))(Il2CppBase() + 0x173904C))(this, channel);
	}
	template <typename T = void> T OnContactSelected(ContactsEntity* entity) {
		return ((T (*)(ChatWindow*, ContactsEntity*))(Il2CppBase() + 0x173AD70))(this, entity);
	}
	template <typename T = void> T OnChatChannelSelected(ChannelView* channel) {
		return ((T (*)(ChatWindow*, ChannelView*))(Il2CppBase() + 0x1739388))(this, channel);
	}
	template <typename T = void> T CreateBubble(ChatEntity* e) {
		return ((T (*)(ChatWindow*, ChatEntity*))(Il2CppBase() + 0x173B6E8))(this, e);
	}
	template <typename T = void> T SendChatMessage(Il2CppString* message) {
		return ((T (*)(ChatWindow*, Il2CppString*))(Il2CppBase() + 0x173B8B4))(this, message);
	}
	template <typename T = void> T OnContactUpdate(ContactsEntity* e) {
		return ((T (*)(ChatWindow*, ContactsEntity*))(Il2CppBase() + 0x173C180))(this, e);
	}
	template <typename T = void> T OnNewMessage(ChatEntity* e) {
		return ((T (*)(ChatWindow*, ChatEntity*))(Il2CppBase() + 0x1735554))(this, e);
	}
	template <typename T = void> T RemoveCurrentChatChannelMessageViews() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173A848))(this);
	}
	template <typename T = void> T SwitchChatPanael(bool isOn) {
		return ((T (*)(ChatWindow*, bool))(Il2CppBase() + 0x173C1E8))(this, isOn);
	}
	template <typename T = void> T HideAllMessages(bool hide) {
		return ((T (*)(ChatWindow*, bool))(Il2CppBase() + 0x173C4D8))(this, hide);
	}
	template <typename T = void> T OnShowb__44_0() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173C9B0))(this);
	}
	template <typename T = void> T OnShowb__44_1() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173C9D8))(this);
	}
	template <typename T = void> T OnShowb__44_2() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173C9E8))(this);
	}
	template <typename T = void> T OnShowb__44_3() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173C9F4))(this);
	}
	template <typename T = void> T OnShowb__44_4() {
		return ((T (*)(ChatWindow*))(Il2CppBase() + 0x173CA0C))(this);
	}

};

