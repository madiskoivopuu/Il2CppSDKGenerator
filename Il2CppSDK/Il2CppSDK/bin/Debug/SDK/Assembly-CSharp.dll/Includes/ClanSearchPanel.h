#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanSearchPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanSearchPanel"));
	}

	template <typename R = uintptr_t> R& StopSearchButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& StatusText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> static R& _timeout() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _dotsCount() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _hasReverseInvite() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _hasInvite() {
		return *(R*)((uintptr_t)this + 0x39);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(ClanSearchPanel*, GuildWindow*))(Il2CppBase() + 0x15978D8))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ClanSearchPanel*))(Il2CppBase() + 0x15979D4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ClanSearchPanel*))(Il2CppBase() + 0x1597AB0))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanSearchPanel*, float))(Il2CppBase() + 0x1597AD8))(this, deltaTime);
	}
	template <typename R = void> R OnStopSearchButtonPressed() {
		return ((R (*)(ClanSearchPanel*))(Il2CppBase() + 0x15980F8))(this);
	}

};

