#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventorySlot.h" 

class InventoryPuppetSlot : public InventorySlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPuppetSlot"));
	}

	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Locked() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& LockedText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& NotActive() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Nullable1<bool>*& _empty() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = GameEntity*> R& _avatar() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 Nullable1<int32_t>*& _unlockLevel() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R Clean() {
		return ((R (*)(InventoryPuppetSlot*))(Il2CppBase() + 0x1233934))(this);
	}
	template <typename R = void> R Bind(GameEntity* avatar, IUIWindow* window, InventorySlotEntity* slot) {
		return ((R (*)(InventoryPuppetSlot*, GameEntity*, IUIWindow*, InventorySlotEntity*))(Il2CppBase() + 0x1233B28))(this, avatar, window, slot);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(InventoryPuppetSlot*, float))(Il2CppBase() + 0x1233C88))(this, deltaTime);
	}

};

