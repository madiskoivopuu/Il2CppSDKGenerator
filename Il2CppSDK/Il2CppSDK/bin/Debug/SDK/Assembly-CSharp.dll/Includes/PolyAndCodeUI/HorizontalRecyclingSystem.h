#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../RecyclingSystem.h" 
namespace PolyAndCodeUI {

class HorizontalRecyclingSystem : public RecyclingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "HorizontalRecyclingSystem"));
	}

	template <typename R = int32_t> R& _rows() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _cellWidth() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& _cellHeight() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Il2CppList<uintptr_t>*& _cellPool() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x50);
	}
	 Il2CppList<PolyAndCodeUI::ICell*>*& _cachedCells() {
		return *(Il2CppList<PolyAndCodeUI::ICell*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _recyclableViewBounds() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _corners() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _recycling() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& currentItemCount() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = int32_t> R& leftMostCellIndex() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& rightMostCellIndex() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = int32_t> R& _leftMostCellRow() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _RightMostCellRow() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = uintptr_t> R& zeroVector() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = uintptr_t> R InitCoroutine(uintptr_t onInitialized) {
		return ((R (*)(HorizontalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x1C53608))(this, onInitialized);
	}
	template <typename R = void> R SetRecyclingBounds() {
		return ((R (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C5369C))(this);
	}
	template <typename R = void> R CreateCellPool() {
		return ((R (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C5374C))(this);
	}
	template <typename R = uintptr_t> R OnValueChangedListener(uintptr_t direction) {
		return ((R (*)(HorizontalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x1C53FE8))(this, direction);
	}
	template <typename R = uintptr_t> R RecycleLeftToRight() {
		return ((R (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C5412C))(this);
	}
	template <typename R = uintptr_t> R RecycleRightToleft() {
		return ((R (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C547F8))(this);
	}
	template <typename R = void> R SetLeftAnchor(uintptr_t rectTransform) {
		return ((R (*)(HorizontalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x1C53EF8))(this, rectTransform);
	}
	template <typename R = void> R OnDrawGizmos() {
		return ((R (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C54E80))(this);
	}

};

}
