#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildSearchWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildSearchWindow"));
	}

	template <typename R = uintptr_t> R& SearchField() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& SearchResultPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& GuildName() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& MembersCount() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& DescriptionGuild() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& LeaderName() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& Server() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& Language() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& GuildStatus() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& ClearButton() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& SendRequestButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& JoinButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xD8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x19413A4))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x1941520))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x19415E4))(this);
	}
	template <typename R = void> R OnSearchFieldEndEdit(Il2CppString* text) {
		return ((R (*)(GuildSearchWindow*, Il2CppString*))(Il2CppBase() + 0x194160C))(this, text);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x194169C))(this);
	}
	template <typename R = void> R OnClearButtonPressed() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x19416A0))(this);
	}
	template <typename R = void> R OnSendRequestButtonPressed() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x1941714))(this);
	}
	template <typename R = void> R OnJoinButtonPressed() {
		return ((R (*)(GuildSearchWindow*))(Il2CppBase() + 0x1941788))(this);
	}

};

