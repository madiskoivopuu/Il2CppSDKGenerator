#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMembersPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMembersPanel"));
	}

	template <typename R = uintptr_t> R& MembersCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ScrollRect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = GuildMemberItem*> R& MemberItemPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = StandartButton*> R& InviteButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& RequestButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& RequestCount() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& _cachedMembersCount() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(GuildMembersPanel*, GuildWindow*))(Il2CppBase() + 0x1B3847C))(this, window);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38578))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38584))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38678))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildMembersPanel*, float))(Il2CppBase() + 0x1B386CC))(this, deltaTime);
	}
	template <typename R = void> R OnInvitePressed() {
		return ((R (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38FF0))(this);
	}
	template <typename R = void> R OnRequestPressed() {
		return ((R (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B39274))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B393E8))(this);
	}

};

