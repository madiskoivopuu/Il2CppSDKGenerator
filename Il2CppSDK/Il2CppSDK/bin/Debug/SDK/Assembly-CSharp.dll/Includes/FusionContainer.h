#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FusionContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionContainer"));
	}

	template <typename R = Il2CppArray<SlotsContainer*>*> R& _inputContainers() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = InventoryItemDraggable*> R& _inputItemPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = InventorySlot*> R& _outputSlot() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = InventoryItemDraggable*> R& _outputItemPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Il2CppList<InventorySlot*>*& _inputSlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _inputSlotsLocked() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = bool> R get_InputSlotsLocked() {
		return ((R (*)(FusionContainer*))(Il2CppBase() + 0x1601F88))(this);
	}
	template <typename R = void> R set_InputSlotsLocked(bool value) {
		return ((R (*)(FusionContainer*, bool))(Il2CppBase() + 0x1601F90))(this, value);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity) {
		return ((R (*)(FusionContainer*, IUIWindow*, GameEntity*))(Il2CppBase() + 0x16021AC))(this, window, entity);
	}

};

