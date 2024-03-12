#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInitialPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInitialPanel"));
	}

	template <typename T = uintptr_t> T& LevelRequiredText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CreateGuildButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SearchGuildButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& StopSearchGuildButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SearchProcessPanel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SearchProcessText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SearchProcessTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(GuildInitialPanel*, uintptr_t))(Il2CppBase() + 0x1B2825C))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B285B4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B28714))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildInitialPanel*, float))(Il2CppBase() + 0x1B28784))(this, deltaTime);
	}
	template <typename T = void> T OnCreateGuildButtonPressed() {
		return ((T (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B28E68))(this);
	}
	template <typename T = void> T OnSearchGuildButtonPressed() {
		return ((T (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B28F78))(this);
	}
	template <typename T = void> T OnStopSearchGuildButtonPressed() {
		return ((T (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B29030))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B2938C))(this);
	}

};

}
