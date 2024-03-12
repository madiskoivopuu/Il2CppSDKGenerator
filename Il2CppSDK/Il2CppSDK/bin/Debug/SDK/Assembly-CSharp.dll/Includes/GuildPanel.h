#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildPanel"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Tag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LeaderName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ServerName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Language() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LeaderMessage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LeaderIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LeaderSprites() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& MessageEditButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& NewsScroll() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& GuildNewsViewPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LoadingObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(GuildPanel*, uintptr_t))(Il2CppBase() + 0x1B3B9C8))(this, window);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildPanel*))(Il2CppBase() + 0x1B3BAC4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildPanel*))(Il2CppBase() + 0x1B3C03C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildPanel*))(Il2CppBase() + 0x1B3C0E0))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildPanel*, float))(Il2CppBase() + 0x1B3C110))(this, deltaTime);
	}
	template <typename T = void> T OnMessageEditPressed() {
		return ((T (*)(GuildPanel*))(Il2CppBase() + 0x1B3C76C))(this);
	}
	template <typename T = void> T OnReceiveGuildEvent(uintptr_t entity) {
		return ((T (*)(GuildPanel*, uintptr_t))(Il2CppBase() + 0x1B3BF54))(this, entity);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildPanel*))(Il2CppBase() + 0x1B3CA54))(this);
	}

};

}
