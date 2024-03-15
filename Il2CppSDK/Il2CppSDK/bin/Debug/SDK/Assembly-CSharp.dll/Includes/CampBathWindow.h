#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class CampBathWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathWindow"));
	}

	template <typename R = uintptr_t> R& ActiveDuration() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& DropHighlight() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& ProgressBar() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& FireAnimator() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& ShowFuelsButton() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = Il2CppString*> R& ActiveLocalizationKey() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = Il2CppString*> R& InactiveLocalizationKey() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& ShareToggle() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = Il2CppString*> static R& _fireAnimatorBoolName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 HashSet1<Il2CppString*>*& _fuels() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x188);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(CampBathWindow*))(Il2CppBase() + 0x15B3DF0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CampBathWindow*))(Il2CppBase() + 0x15B3DF8))(this);
	}
	template <typename R = void> R OnShareValueChanged(bool value) {
		return ((R (*)(CampBathWindow*, bool))(Il2CppBase() + 0x15B42B0))(this, value);
	}
	template <typename R = void> R OnSelectedInventoryChanged(InventorySlotEntity* selectedInventory) {
		return ((R (*)(CampBathWindow*, InventorySlotEntity*))(Il2CppBase() + 0x15B43DC))(this, selectedInventory);
	}
	template <typename R = bool> R CanFill(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(CampBathWindow*, InventorySlotEntity*))(Il2CppBase() + 0x15B4438))(this, inventoryEntity);
	}
	template <typename R = void> R OnDropFuel() {
		return ((R (*)(CampBathWindow*))(Il2CppBase() + 0x15B4534))(this);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(CampBathWindow*, IInventoryItem*))(Il2CppBase() + 0x15B469C))(this, item);
	}
	template <typename R = void> R UpdateProgressBar(GameEntity* target) {
		return ((R (*)(CampBathWindow*, GameEntity*))(Il2CppBase() + 0x15B48EC))(this, target);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CampBathWindow*))(Il2CppBase() + 0x15B4B3C))(this);
	}
	template <typename R = void> R ShowFuels() {
		return ((R (*)(CampBathWindow*))(Il2CppBase() + 0x15B4DB8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CampBathWindow*, float))(Il2CppBase() + 0x15B4E74))(this, deltaTime);
	}

};

