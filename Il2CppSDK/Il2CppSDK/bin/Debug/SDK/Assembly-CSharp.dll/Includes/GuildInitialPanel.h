#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInitialPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInitialPanel"));
	}

	template <typename R = uintptr_t> R& LevelRequiredText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = StandartButton*> R& CreateGuildButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = StandartButton*> R& SearchGuildButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = StandartButton*> R& StopSearchGuildButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& SearchProcessPanel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& SearchProcessText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& SearchProcessTimer() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R Bind(UIWindow* window) {
		return ((R (*)(GuildInitialPanel*, UIWindow*))(Il2CppBase() + 0x1B2825C))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B285B4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B28714))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildInitialPanel*, float))(Il2CppBase() + 0x1B28784))(this, deltaTime);
	}
	template <typename R = void> R OnCreateGuildButtonPressed() {
		return ((R (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B28E68))(this);
	}
	template <typename R = void> R OnSearchGuildButtonPressed() {
		return ((R (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B28F78))(this);
	}
	template <typename R = void> R OnStopSearchGuildButtonPressed() {
		return ((R (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B29030))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildInitialPanel*))(Il2CppBase() + 0x1B2938C))(this);
	}

};

