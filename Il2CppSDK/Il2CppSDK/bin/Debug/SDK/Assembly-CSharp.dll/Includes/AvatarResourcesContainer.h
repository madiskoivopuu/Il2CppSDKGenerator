#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryContainer.h" 

class AvatarResourcesContainer : public InventoryContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarResourcesContainer"));
	}

	template <typename R = bool> R& ShowAvatarFilteredResources() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = INeedResources*> R& NeedResources() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int32_t> R& _avatarId() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int64_t> R& _avatarPlayerId() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& Inited() {
		return *(R*)((uintptr_t)this + 0xD8);
	}

	template <typename R = INeedResources*> R get_NeedResources() {
		return ((R (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB6CC8))(this);
	}
	template <typename R = void> R set_NeedResources(INeedResources* value) {
		return ((R (*)(AvatarResourcesContainer*, INeedResources*))(Il2CppBase() + 0xFB6CD0))(this, value);
	}
	template <typename R = bool> R get_Inited() {
		return ((R (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB6CD8))(this);
	}
	template <typename R = void> R set_Inited(bool value) {
		return ((R (*)(AvatarResourcesContainer*, bool))(Il2CppBase() + 0xFB6CE0))(this, value);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB6CEC))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* avatar, bool ignoreBop) {
		return ((R (*)(AvatarResourcesContainer*, IUIWindow*, GameEntity*, bool))(Il2CppBase() + 0xFB6DD4))(this, window, avatar, ignoreBop);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(AvatarResourcesContainer*, float))(Il2CppBase() + 0xFB72A8))(this, deltaTime);
	}
	template <typename R = int32_t> R UpdateAllResources(AccountEntity* account, GameEntity* avatar) {
		return ((R (*)(AvatarResourcesContainer*, AccountEntity*, GameEntity*))(Il2CppBase() + 0xFB84E0))(this, account, avatar);
	}
	template <typename R = int32_t> R UpdateFilteredResources(AccountEntity* account, GameEntity* avatar) {
		return ((R (*)(AvatarResourcesContainer*, AccountEntity*, GameEntity*))(Il2CppBase() + 0xFB7894))(this, account, avatar);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB89F8))(this);
	}

};

