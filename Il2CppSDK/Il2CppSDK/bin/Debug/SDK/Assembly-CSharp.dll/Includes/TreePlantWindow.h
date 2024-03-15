#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class TreePlantWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreePlantWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = PrerequisiteContainer*> R& GardenContainer() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& SkipButton() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& SkipButtonText() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& TreeImage() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& ProgressImage() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& DurationText() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& ReadyText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& LimitText() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& CounterText() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = GameDataEntity*> R& _treeData() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = Il2CppString*> R& _treeGroup() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = int32_t> R& _treesMaxCount() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uint8_t> R& _cellId() {
		return *(R*)((uintptr_t)this + 0x1BC);
	}
	 Nullable1int32_t>*& _treesCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x1C0);
	}
	 Nullable1Status*>*& _status() {
		return *(Nullable1Status*>**)((uintptr_t)this + 0x1C8);
	}
	 HashSet1Il2CppString*>*& _needResources() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x1D0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(TreePlantWindow*))(Il2CppBase() + 0x1522F78))(this);
	}
	 HashSet1Il2CppString*>* GetNeedResources() {
		return ((HashSet1Il2CppString*>* (*)(TreePlantWindow*))(Il2CppBase() + 0x1523074))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TreePlantWindow*))(Il2CppBase() + 0x1523370))(this);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(TreePlantWindow*, IInventoryItem*))(Il2CppBase() + 0x1524174))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(TreePlantWindow*))(Il2CppBase() + 0x1524648))(this);
	}
	template <typename R = int32_t> R GetTreesCount(GameEntity* target) {
		return ((R (*)(TreePlantWindow*, GameEntity*))(Il2CppBase() + 0x15248B0))(this, target);
	}
	template <typename R = void> R OnSkipClick() {
		return ((R (*)(TreePlantWindow*))(Il2CppBase() + 0x1524B4C))(this);
	}
	 ValueTuple2bool, int32_t>* CanSkip(GameEntity* target) {
		return ((ValueTuple2bool, int32_t>* (*)(TreePlantWindow*, GameEntity*))(Il2CppBase() + 0x1524D74))(this, target);
	}
	template <typename R = Status*> R GetStatus(GameEntity* target, int32_t count, int64_t now) {
		return ((R (*)(TreePlantWindow*, GameEntity*, int32_t, int64_t))(Il2CppBase() + 0x1524FD0))(this, target, count, now);
	}
	template <typename R = void> R UpdateStatus(GameEntity* target) {
		return ((R (*)(TreePlantWindow*, GameEntity*))(Il2CppBase() + 0x1523A44))(this, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TreePlantWindow*, float))(Il2CppBase() + 0x1525054))(this, deltaTime);
	}
	template <typename R = bool> R GetTreesCountb__26_0(GameEntity* e) {
		return ((R (*)(TreePlantWindow*, GameEntity*))(Il2CppBase() + 0x15251B0))(this, e);
	}
	template <typename R = bool> R GetTreesCountb__26_1(GameEntity* e) {
		return ((R (*)(TreePlantWindow*, GameEntity*))(Il2CppBase() + 0x1525228))(this, e);
	}

};

