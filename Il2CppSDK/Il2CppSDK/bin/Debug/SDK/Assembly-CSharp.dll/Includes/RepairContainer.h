#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepairContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepairContainer"));
	}

	 Il2CppList<InventorySlot*>*& InventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Grid() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = InventoryItemDraggable*> R& ResultItem() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = GameEntity*> R& _entity() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity) {
		return ((R (*)(RepairContainer*, IUIWindow*, GameEntity*))(Il2CppBase() + 0x13A3020))(this, window, entity);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RepairContainer*, float))(Il2CppBase() + 0x13A3658))(this, deltaTime);
	}

};

