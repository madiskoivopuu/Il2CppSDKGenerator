#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class TreePlantWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreePlantWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& GardenContainer() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& SkipButton() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& SkipButtonText() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& TreeImage() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& ProgressImage() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& DurationText() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ReadyText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& LimitText() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& CounterText() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& _treeData() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppString*> T& _treeGroup() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& _treesMaxCount() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = unsigned char> T& _cellId() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = void*> T& _treesCount() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = void*> T& _status() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = void*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TreePlantWindow*))(Il2CppBase() + 0x1522F78))(this);
	}
	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(TreePlantWindow*))(Il2CppBase() + 0x1523074))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TreePlantWindow*))(Il2CppBase() + 0x1523370))(this);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(TreePlantWindow*, uintptr_t))(Il2CppBase() + 0x1524174))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(TreePlantWindow*))(Il2CppBase() + 0x1524648))(this);
	}
	template <typename T = int32_t> T GetTreesCount(uintptr_t target) {
		return ((T (*)(TreePlantWindow*, uintptr_t))(Il2CppBase() + 0x15248B0))(this, target);
	}
	template <typename T = void> T OnSkipClick() {
		return ((T (*)(TreePlantWindow*))(Il2CppBase() + 0x1524B4C))(this);
	}
	template <typename T = void*> T CanSkip(uintptr_t target) {
		return ((T (*)(TreePlantWindow*, uintptr_t))(Il2CppBase() + 0x1524D74))(this, target);
	}
	template <typename T = uintptr_t> T GetStatus(uintptr_t target, int32_t count, int64_t now) {
		return ((T (*)(TreePlantWindow*, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x1524FD0))(this, target, count, now);
	}
	template <typename T = void> T UpdateStatus(uintptr_t target) {
		return ((T (*)(TreePlantWindow*, uintptr_t))(Il2CppBase() + 0x1523A44))(this, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TreePlantWindow*, float))(Il2CppBase() + 0x1525054))(this, deltaTime);
	}
	template <typename T = bool> T GetTreesCountb__26_0(uintptr_t e) {
		return ((T (*)(TreePlantWindow*, uintptr_t))(Il2CppBase() + 0x15251B0))(this, e);
	}
	template <typename T = bool> T GetTreesCountb__26_1(uintptr_t e) {
		return ((T (*)(TreePlantWindow*, uintptr_t))(Il2CppBase() + 0x1525228))(this, e);
	}

};

}
