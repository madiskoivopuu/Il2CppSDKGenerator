#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMembersPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMembersPanel"));
	}

	template <typename T = uintptr_t> T& MembersCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ScrollRect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MemberItemPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& InviteButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RequestButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& RequestCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _cachedMembersCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(GuildMembersPanel*, uintptr_t))(Il2CppBase() + 0x1B3847C))(this, window);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38578))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38584))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38678))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildMembersPanel*, float))(Il2CppBase() + 0x1B386CC))(this, deltaTime);
	}
	template <typename T = void> T OnInvitePressed() {
		return ((T (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B38FF0))(this);
	}
	template <typename T = void> T OnRequestPressed() {
		return ((T (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B39274))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildMembersPanel*))(Il2CppBase() + 0x1B393E8))(this);
	}

};

}
