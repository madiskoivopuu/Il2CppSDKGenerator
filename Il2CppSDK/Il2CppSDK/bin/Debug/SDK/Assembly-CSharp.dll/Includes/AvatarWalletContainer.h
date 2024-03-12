#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryContainer" 

class AvatarWalletContainer: InventoryContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarWalletContainer"));
	}

	template <typename T = uintptr_t> T& NeedWallet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _avatarId() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int64_t> T& _avatarPlayerId() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& Inited() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& PointsOffset() {
		return *(T*)((uintptr_t)this + 0xD4);
	}

	template <typename T = uintptr_t> T get_NeedWallet() {
		return ((T (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB8AD8))(this);
	}
	template <typename T = void> T set_NeedWallet(uintptr_t value) {
		return ((T (*)(AvatarWalletContainer*, uintptr_t))(Il2CppBase() + 0xFB8AE0))(this, value);
	}
	template <typename T = bool> T get_Inited() {
		return ((T (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB8AE8))(this);
	}
	template <typename T = void> T set_Inited(bool value) {
		return ((T (*)(AvatarWalletContainer*, bool))(Il2CppBase() + 0xFB8AF0))(this, value);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB8AFC))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t avatar, bool ignoreBop) {
		return ((T (*)(AvatarWalletContainer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0xFB8BE4))(this, window, avatar, ignoreBop);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(AvatarWalletContainer*, float))(Il2CppBase() + 0xFB90B8))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB98F4))(this);
	}

};

}
