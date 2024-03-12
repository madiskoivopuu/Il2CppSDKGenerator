#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePetsInventoryWindow`1" 

class PetsInventoryWindow: BasePetsInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetsInventoryWindow"));
	}

	template <typename T = uintptr_t> T& _choosePetButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _fastActivateBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _chooseProgressImage() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _chooseProgressText() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _petInfoPanel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _noPetObject() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _noPetText() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _petLockedMark() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _petInfoBtn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& _isPuppetRendererInited() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _isChooseInterupted() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = int32_t> T& _petInfoWindowId() {
		return *(T*)((uintptr_t)this + 0x134);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4828))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4954))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4A30))(this);
	}
	template <typename T = void> T InitPetPuppet() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4AA4))(this);
	}
	template <typename T = void> T OnPetInfo() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4B38))(this);
	}
	template <typename T = void> T OnPetChoose() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F4C64))(this);
	}
	template <typename T = void> T OnPetChosen() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F50B4))(this);
	}
	template <typename T = void> T SelectArmingPetOrFirst() {
		return ((T (*)(PetsInventoryWindow*))(Il2CppBase() + 0x16F49BC))(this);
	}
	template <typename T = void> T OnSelect(uintptr_t item) {
		return ((T (*)(PetsInventoryWindow*, uintptr_t))(Il2CppBase() + 0x16F50CC))(this, item);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PetsInventoryWindow*, float))(Il2CppBase() + 0x16F5794))(this, deltaTime);
	}

};

}
