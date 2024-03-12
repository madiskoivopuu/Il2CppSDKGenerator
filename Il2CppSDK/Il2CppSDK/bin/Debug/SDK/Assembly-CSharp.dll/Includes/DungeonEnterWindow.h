#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class DungeonEnterWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterWindow"));
	}

	template <typename T = uintptr_t> T& DungeonIcon() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DungeonCaption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& InfoBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& PassBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ResourcesSlots() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& DifficultyAnimator() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& GradesCanvasGroup() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DungeonGradeButtons() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& DifficultyHolder() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& DifficultyDescription() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& _cachedPass() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& _locationGrade() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130A984))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130B830))(this);
	}
	template <typename T = void> T InitResources(uintptr_t target) {
		return ((T (*)(DungeonEnterWindow*, uintptr_t))(Il2CppBase() + 0x130B15C))(this, target);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(DungeonEnterWindow*, uintptr_t))(Il2CppBase() + 0x130BBD4))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(DungeonEnterWindow*, uintptr_t))(Il2CppBase() + 0x130C17C))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130C66C))(this);
	}
	template <typename T = void> T ChangeLocationGrade(int32_t index) {
		return ((T (*)(DungeonEnterWindow*, int32_t))(Il2CppBase() + 0x130C8D4))(this, index);
	}
	template <typename T = void> T Confirm() {
		return ((T (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130CCC8))(this);
	}
	template <typename T = bool> T CanPass(uintptr_t target) {
		return ((T (*)(DungeonEnterWindow*, uintptr_t))(Il2CppBase() + 0x130CDD8))(this, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DungeonEnterWindow*, float))(Il2CppBase() + 0x130D04C))(this, deltaTime);
	}

};

}
