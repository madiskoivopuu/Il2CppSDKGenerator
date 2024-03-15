#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class TrophyPedestalWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyPedestalWindow"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _trophyNamePanel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& _trophyName() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = InventoryContainer*> R& _inventoryContainer() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x188);
	}
	template <typename R = ItemEntity*> R& _currentTrophy() {
		return *(R*)((uintptr_t)this + 0x190);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1528100))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1528430))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x15284E8))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x15285E8))(this);
	}
	template <typename R = ItemEntity*> R GetTrophyItem() {
		return ((R (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1528A88))(this);
	}
	template <typename R = void> R UpdateCurrentTrophy(ItemEntity* trophyEntity) {
		return ((R (*)(TrophyPedestalWindow*, ItemEntity*))(Il2CppBase() + 0x1528C34))(this, trophyEntity);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(TrophyPedestalWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1528DE0))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(TrophyPedestalWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x152902C))(this, item, eventData);
	}
	template <typename R = void> R UpdateTrophySlots(ItemEntity* item) {
		return ((R (*)(TrophyPedestalWindow*, ItemEntity*))(Il2CppBase() + 0x1528E88))(this, item);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TrophyPedestalWindow*, float))(Il2CppBase() + 0x152909C))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x15291BC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1529438))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(TrophyPedestalWindow*, float))(Il2CppBase() + 0x15294AC))(this, deltaTime);
	}

};

