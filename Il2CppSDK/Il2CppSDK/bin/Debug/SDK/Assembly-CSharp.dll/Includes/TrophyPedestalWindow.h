#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class TrophyPedestalWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyPedestalWindow"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _trophyNamePanel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _trophyName() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _inventoryContainer() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = void*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _currentTrophy() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1528100))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1528430))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x15284E8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x15285E8))(this);
	}
	template <typename T = uintptr_t> T GetTrophyItem() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1528A88))(this);
	}
	template <typename T = void> T UpdateCurrentTrophy(uintptr_t trophyEntity) {
		return ((T (*)(TrophyPedestalWindow*, uintptr_t))(Il2CppBase() + 0x1528C34))(this, trophyEntity);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(TrophyPedestalWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1528DE0))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(TrophyPedestalWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x152902C))(this, item, eventData);
	}
	template <typename T = void> T UpdateTrophySlots(uintptr_t item) {
		return ((T (*)(TrophyPedestalWindow*, uintptr_t))(Il2CppBase() + 0x1528E88))(this, item);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TrophyPedestalWindow*, float))(Il2CppBase() + 0x152909C))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x15291BC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(TrophyPedestalWindow*))(Il2CppBase() + 0x1529438))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(TrophyPedestalWindow*, float))(Il2CppBase() + 0x15294AC))(this, deltaTime);
	}

};

}
