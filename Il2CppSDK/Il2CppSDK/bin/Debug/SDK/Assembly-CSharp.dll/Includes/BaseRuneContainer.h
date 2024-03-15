#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class BaseRuneContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseRuneContainer"));
	}

	 Il2CppList<RuneItem*>*& _instancedRuneItems() {
		return *(Il2CppList<RuneItem*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = IRuneInventoryPanel*> R& _runePanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 IItemEventHandler1RuneItem*>*& _handler() {
		return *(IItemEventHandler1RuneItem*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _runeInventoryId() {
		return *(R*)((uintptr_t)this + 0x6C);
	}

	template <typename R = void> R CheckSlotsForCanOperate(Il2CppString* runeBlueprint) {
		return ((R (*)(BaseRuneContainer*, Il2CppString*))(Il2CppBase() + 0x166FB70))(this, runeBlueprint);
	}
	template <typename R = void> R OnItemAdded(RuneItem* item) {
		return ((R (*)(BaseRuneContainer*, RuneItem*))(Il2CppBase() + 0x16706AC))(this, item);
	}
	template <typename R = void> R OnItemRemove(RuneItem* item) {
		return ((R (*)(BaseRuneContainer*, RuneItem*))(Il2CppBase() + 0x16707D4))(this, item);
	}
	template <typename R = void> R OnItemChanged(RuneItem* item) {
		return ((R (*)(BaseRuneContainer*, RuneItem*))(Il2CppBase() + 0x16708E8))(this, item);
	}
	template <typename R = void> R ResetContainer() {
		return ((R (*)(BaseRuneContainer*))(Il2CppBase() + 0x1670A10))(this);
	}

};

