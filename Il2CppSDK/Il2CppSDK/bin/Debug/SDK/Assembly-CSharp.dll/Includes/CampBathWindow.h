#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class CampBathWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathWindow"));
	}

	template <typename T = uintptr_t> T& ActiveDuration() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DropHighlight() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& FireAnimator() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ShowFuelsButton() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& ActiveLocalizationKey() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppString*> T& InactiveLocalizationKey() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& ShareToggle() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> static T& _fireAnimatorBoolName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _fuels() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(CampBathWindow*))(Il2CppBase() + 0x15B3DF0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CampBathWindow*))(Il2CppBase() + 0x15B3DF8))(this);
	}
	template <typename T = void> T OnShareValueChanged(bool value) {
		return ((T (*)(CampBathWindow*, bool))(Il2CppBase() + 0x15B42B0))(this, value);
	}
	template <typename T = void> T OnSelectedInventoryChanged(uintptr_t selectedInventory) {
		return ((T (*)(CampBathWindow*, uintptr_t))(Il2CppBase() + 0x15B43DC))(this, selectedInventory);
	}
	template <typename T = bool> T CanFill(uintptr_t inventoryEntity) {
		return ((T (*)(CampBathWindow*, uintptr_t))(Il2CppBase() + 0x15B4438))(this, inventoryEntity);
	}
	template <typename T = void> T OnDropFuel() {
		return ((T (*)(CampBathWindow*))(Il2CppBase() + 0x15B4534))(this);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(CampBathWindow*, uintptr_t))(Il2CppBase() + 0x15B469C))(this, item);
	}
	template <typename T = void> T UpdateProgressBar(uintptr_t target) {
		return ((T (*)(CampBathWindow*, uintptr_t))(Il2CppBase() + 0x15B48EC))(this, target);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CampBathWindow*))(Il2CppBase() + 0x15B4B3C))(this);
	}
	template <typename T = void> T ShowFuels() {
		return ((T (*)(CampBathWindow*))(Il2CppBase() + 0x15B4DB8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CampBathWindow*, float))(Il2CppBase() + 0x15B4E74))(this, deltaTime);
	}

};

}
