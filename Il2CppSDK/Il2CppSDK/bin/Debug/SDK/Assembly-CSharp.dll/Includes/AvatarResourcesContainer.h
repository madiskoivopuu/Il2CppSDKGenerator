#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryContainer.h" 

class AvatarResourcesContainer : public InventoryContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvatarResourcesContainer"));
	}

	template <typename T = bool> T& ShowAvatarFilteredResources() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = INeedResources*> T& NeedResources() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& _avatarId() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& _avatarPlayerId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& Inited() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = INeedResources*> T get_NeedResources() {
		return ((T (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB6CC8))(this);
	}
	template <typename T = void> T set_NeedResources(INeedResources* value) {
		return ((T (*)(AvatarResourcesContainer*, INeedResources*))(Il2CppBase() + 0xFB6CD0))(this, value);
	}
	template <typename T = bool> T get_Inited() {
		return ((T (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB6CD8))(this);
	}
	template <typename T = void> T set_Inited(bool value) {
		return ((T (*)(AvatarResourcesContainer*, bool))(Il2CppBase() + 0xFB6CE0))(this, value);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB6CEC))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window, GameEntity* avatar, bool ignoreBop) {
		return ((T (*)(AvatarResourcesContainer*, IUIWindow*, GameEntity*, bool))(Il2CppBase() + 0xFB6DD4))(this, window, avatar, ignoreBop);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(AvatarResourcesContainer*, float))(Il2CppBase() + 0xFB72A8))(this, deltaTime);
	}
	template <typename T = int32_t> T UpdateAllResources(AccountEntity* account, GameEntity* avatar) {
		return ((T (*)(AvatarResourcesContainer*, AccountEntity*, GameEntity*))(Il2CppBase() + 0xFB84E0))(this, account, avatar);
	}
	template <typename T = int32_t> T UpdateFilteredResources(AccountEntity* account, GameEntity* avatar) {
		return ((T (*)(AvatarResourcesContainer*, AccountEntity*, GameEntity*))(Il2CppBase() + 0xFB7894))(this, account, avatar);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AvatarResourcesContainer*))(Il2CppBase() + 0xFB89F8))(this);
	}

};

