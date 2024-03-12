#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class GuildSearchWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildSearchWindow"));
	}

	template <typename T = uintptr_t> T& SearchField() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SearchResultPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MembersCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DescriptionGuild() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LeaderName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Server() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Language() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& GuildStatus() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ClearButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SendRequestButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& JoinButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x19413A4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x1941520))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x19415E4))(this);
	}
	template <typename T = void> T OnSearchFieldEndEdit(Il2CppString* text) {
		return ((T (*)(GuildSearchWindow*, Il2CppString*))(Il2CppBase() + 0x194160C))(this, text);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x194169C))(this);
	}
	template <typename T = void> T OnClearButtonPressed() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x19416A0))(this);
	}
	template <typename T = void> T OnSendRequestButtonPressed() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x1941714))(this);
	}
	template <typename T = void> T OnJoinButtonPressed() {
		return ((T (*)(GuildSearchWindow*))(Il2CppBase() + 0x1941788))(this);
	}

};

}
