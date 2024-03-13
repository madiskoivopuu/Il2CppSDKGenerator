#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventorySlot.h" 

class InventoryPuppetSlot : public InventorySlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPuppetSlot"));
	}

	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Locked() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LockedText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NotActive() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Nullable1bool>*> T& _empty() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = GameEntity*> T& _avatar() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Nullable1int32_t>*> T& _unlockLevel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Clean() {
		return ((T (*)(InventoryPuppetSlot*))(Il2CppBase() + 0x1233934))(this);
	}
	template <typename T = void> T Bind(GameEntity* avatar, IUIWindow* window, InventorySlotEntity* slot) {
		return ((T (*)(InventoryPuppetSlot*, GameEntity*, IUIWindow*, InventorySlotEntity*))(Il2CppBase() + 0x1233B28))(this, avatar, window, slot);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(InventoryPuppetSlot*, float))(Il2CppBase() + 0x1233C88))(this, deltaTime);
	}

};

