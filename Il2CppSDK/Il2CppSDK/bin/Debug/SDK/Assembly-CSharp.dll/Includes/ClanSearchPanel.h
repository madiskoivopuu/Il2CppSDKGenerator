#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanSearchPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanSearchPanel"));
	}

	template <typename T = uintptr_t> T& StopSearchButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& StatusText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& _timeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _dotsCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _hasReverseInvite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _hasInvite() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = void> T Bind(GuildWindow* window) {
		return ((T (*)(ClanSearchPanel*, GuildWindow*))(Il2CppBase() + 0x15978D8))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ClanSearchPanel*))(Il2CppBase() + 0x15979D4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ClanSearchPanel*))(Il2CppBase() + 0x1597AB0))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanSearchPanel*, float))(Il2CppBase() + 0x1597AD8))(this, deltaTime);
	}
	template <typename T = void> T OnStopSearchButtonPressed() {
		return ((T (*)(ClanSearchPanel*))(Il2CppBase() + 0x15980F8))(this);
	}

};

