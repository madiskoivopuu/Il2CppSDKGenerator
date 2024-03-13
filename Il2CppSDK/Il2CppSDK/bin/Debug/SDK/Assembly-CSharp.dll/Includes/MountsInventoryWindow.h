#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountsInventoryWindow1.h" 

class MountsInventoryWindow : public BaseMountsInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsInventoryWindow"));
	}

	template <typename T = DelayedButton*> T& _chooseMountButton() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _fastActivateBtn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _chooseProgressImage() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = LocalizedText*> T& _chooseProgressText() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = MountInfoPanel*> T& _mountInfoPanel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = PuppetRendererController*> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _allMountsButton() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _noMountObject() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _noMountText() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _isPuppetRendererInited() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& _isChooseInterupted() {
		return *(T*)((uintptr_t)this + 0x139);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x154FEF8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1550198))(this);
	}
	template <typename T = void> T InitMountPuppet() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x155020C))(this);
	}
	template <typename T = void> T OnMountChoose() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x15502A0))(this);
	}
	template <typename T = void> T OnFastActivateClick() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x155070C))(this);
	}
	template <typename T = void> T OnMountChosen() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1550710))(this);
	}
	template <typename T = void> T SelectArmingMountOrFirst() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1550134))(this);
	}
	template <typename T = void> T OnSelect(IInventoryItem* item) {
		return ((T (*)(MountsInventoryWindow*, IInventoryItem*))(Il2CppBase() + 0x1550728))(this, item);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MountsInventoryWindow*, float))(Il2CppBase() + 0x1550BD0))(this, deltaTime);
	}
	template <typename T = void> T OnShowb__12_0() {
		return ((T (*)(MountsInventoryWindow*))(Il2CppBase() + 0x1551404))(this);
	}

};

