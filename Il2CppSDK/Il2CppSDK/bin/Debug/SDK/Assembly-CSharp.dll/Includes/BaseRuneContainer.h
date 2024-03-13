#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class BaseRuneContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseRuneContainer"));
	}

	template <typename T = Il2CppList<RuneItem*>*> T& _instancedRuneItems() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = IRuneInventoryPanel*> T& _runePanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = IItemEventHandler1RuneItem*>*> T& _handler() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _runeInventoryId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T CheckSlotsForCanOperate(Il2CppString* runeBlueprint) {
		return ((T (*)(BaseRuneContainer*, Il2CppString*))(Il2CppBase() + 0x166FB70))(this, runeBlueprint);
	}
	template <typename T = void> T OnItemAdded(RuneItem* item) {
		return ((T (*)(BaseRuneContainer*, RuneItem*))(Il2CppBase() + 0x16706AC))(this, item);
	}
	template <typename T = void> T OnItemRemove(RuneItem* item) {
		return ((T (*)(BaseRuneContainer*, RuneItem*))(Il2CppBase() + 0x16707D4))(this, item);
	}
	template <typename T = void> T OnItemChanged(RuneItem* item) {
		return ((T (*)(BaseRuneContainer*, RuneItem*))(Il2CppBase() + 0x16708E8))(this, item);
	}
	template <typename T = void> T ResetContainer() {
		return ((T (*)(BaseRuneContainer*))(Il2CppBase() + 0x1670A10))(this);
	}

};

