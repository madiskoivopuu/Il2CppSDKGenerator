#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePetsInventoryWindow1.h" 

class PetsInventoryWindow : public BasePetsInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetsInventoryWindow"));
	}

	template <typename R = DelayedButton*> R& _choosePetButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _fastActivateBtn() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _chooseProgressImage() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = LocalizedText*> R& _chooseProgressText() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = PetInfoPanel*> R& _petInfoPanel() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _noPetObject() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& _noPetText() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& _petLockedMark() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _petInfoBtn() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = bool> R& _isPuppetRendererInited() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& _isChooseInterupted() {
		return *(R*)((uintptr_t)this + 0x131);
	}
	template <typename R = int32_t> R& _petInfoWindowId() {
		return *(R*)((uintptr_t)this + 0x134);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4828))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4954))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4A30))(this);
	}
	template <typename R = void> R InitPetPuppet() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4AA4))(this);
	}
	template <typename R = void> R OnPetInfo() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4B38))(this);
	}
	template <typename R = void> R OnPetChoose() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4C64))(this);
	}
	template <typename R = void> R OnPetChosen() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F50B4))(this);
	}
	template <typename R = void> R SelectArmingPetOrFirst() {
		return ((R (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F49BC))(this);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(PetsInventoryWindow*, IInventoryItem*))(Il2CppBase() + 0x16F50CC))(this, item);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PetsInventoryWindow*, float))(Il2CppBase() + 0x16F5794))(this, deltaTime);
	}

};

