#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryContainer.h" 

class AvatarWalletContainer : public InventoryContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarWalletContainer"));
	}

	template <typename R = INeedWallet*> R& NeedWallet() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& _avatarId() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int64_t> R& _avatarPlayerId() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = bool> R& Inited() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> R& PointsOffset() {
		return *(R*)((uintptr_t)this + 0xD4);
	}

	template <typename R = INeedWallet*> R get_NeedWallet() {
		return ((R (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB8AD8))(this);
	}
	template <typename R = void> R set_NeedWallet(INeedWallet* value) {
		return ((R (*)(AvatarWalletContainer*, INeedWallet*))(Il2CppBase() + 0xFB8AE0))(this, value);
	}
	template <typename R = bool> R get_Inited() {
		return ((R (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB8AE8))(this);
	}
	template <typename R = void> R set_Inited(bool value) {
		return ((R (*)(AvatarWalletContainer*, bool))(Il2CppBase() + 0xFB8AF0))(this, value);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB8AFC))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* avatar, bool ignoreBop) {
		return ((R (*)(AvatarWalletContainer*, IUIWindow*, GameEntity*, bool))(Il2CppBase() + 0xFB8BE4))(this, window, avatar, ignoreBop);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(AvatarWalletContainer*, float))(Il2CppBase() + 0xFB90B8))(this, deltaTime);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(AvatarWalletContainer*))(Il2CppBase() + 0xFB98F4))(this);
	}

};

