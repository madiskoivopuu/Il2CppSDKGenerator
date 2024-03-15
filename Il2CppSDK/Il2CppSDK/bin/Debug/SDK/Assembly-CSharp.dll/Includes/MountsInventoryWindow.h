#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountsInventoryWindow1.h" 

class MountsInventoryWindow : public BaseMountsInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsInventoryWindow"));
	}

	template <typename R = DelayedButton*> R& _chooseMountButton() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _fastActivateBtn() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _chooseProgressImage() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = LocalizedText*> R& _chooseProgressText() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = MountInfoPanel*> R& _mountInfoPanel() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = PuppetRendererController*> R& _puppetRenderer() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& _allMountsButton() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _noMountObject() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& _noMountText() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& _isPuppetRendererInited() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = bool> R& _isChooseInterupted() {
		return *(R*)((uintptr_t)this + 0x139);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x154FEF8))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1550198))(this);
	}
	template <typename R = void> R InitMountPuppet() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x155020C))(this);
	}
	template <typename R = void> R OnMountChoose() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x15502A0))(this);
	}
	template <typename R = void> R OnFastActivateClick() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x155070C))(this);
	}
	template <typename R = void> R OnMountChosen() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1550710))(this);
	}
	template <typename R = void> R SelectArmingMountOrFirst() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1550134))(this);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(MountsInventoryWindow*, IInventoryItem*))(Il2CppBase() + 0x1550728))(this, item);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MountsInventoryWindow*, float))(Il2CppBase() + 0x1550BD0))(this, deltaTime);
	}
	template <typename R = void> R OnShowb__12_0() {
		return ((R (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1551404))(this);
	}

};

