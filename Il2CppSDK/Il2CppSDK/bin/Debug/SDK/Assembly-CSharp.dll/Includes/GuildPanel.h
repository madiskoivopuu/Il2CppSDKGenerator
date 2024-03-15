#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildPanel"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Tag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& LeaderName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ServerName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Language() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& LeaderMessage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& LeaderIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& LeaderSprites() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = StandartButton*> R& MessageEditButton() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& NewsScroll() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = GuildNewsView*> R& GuildNewsViewPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& LoadingObject() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Bind(UIWindow* window) {
		return ((R (*)(GuildPanel*, UIWindow*))(Il2CppBase() + 0x1B3B9C8))(this, window);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildPanel*))(Il2CppBase() + 0x1B3BAC4))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildPanel*))(Il2CppBase() + 0x1B3C03C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildPanel*))(Il2CppBase() + 0x1B3C0E0))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildPanel*, float))(Il2CppBase() + 0x1B3C110))(this, deltaTime);
	}
	template <typename R = void> R OnMessageEditPressed() {
		return ((R (*)(GuildPanel*))(Il2CppBase() + 0x1B3C76C))(this);
	}
	template <typename R = void> R OnReceiveGuildEvent(ChatEntity* entity) {
		return ((R (*)(GuildPanel*, ChatEntity*))(Il2CppBase() + 0x1B3BF54))(this, entity);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildPanel*))(Il2CppBase() + 0x1B3CA54))(this);
	}

};

