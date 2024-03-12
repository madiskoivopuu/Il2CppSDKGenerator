#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../PolyAndCode.UI/RecyclingSystem" 
namespace PolyAndCodeUI {

class HorizontalRecyclingSystem: RecyclingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "HorizontalRecyclingSystem"));
	}

	template <typename T = int32_t> T& _rows() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _cellWidth() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _cellHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cellPool() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cachedCells() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _recyclableViewBounds() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _corners() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _recycling() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& currentItemCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& leftMostCellIndex() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& rightMostCellIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _leftMostCellRow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _RightMostCellRow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector2> T& zeroVector() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = uintptr_t> T InitCoroutine(uintptr_t onInitialized) {
		return ((T (*)(HorizontalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x1C53608))(this, onInitialized);
	}
	template <typename T = void> T SetRecyclingBounds() {
		return ((T (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C5369C))(this);
	}
	template <typename T = void> T CreateCellPool() {
		return ((T (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C5374C))(this);
	}
	template <typename T = Il2CppVector2> T OnValueChangedListener(Il2CppVector2 direction) {
		return ((T (*)(HorizontalRecyclingSystem*, Il2CppVector2))(Il2CppBase() + 0x1C53FE8))(this, direction);
	}
	template <typename T = Il2CppVector2> T RecycleLeftToRight() {
		return ((T (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C5412C))(this);
	}
	template <typename T = Il2CppVector2> T RecycleRightToleft() {
		return ((T (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C547F8))(this);
	}
	template <typename T = void> T SetLeftAnchor(uintptr_t rectTransform) {
		return ((T (*)(HorizontalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x1C53EF8))(this, rectTransform);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(HorizontalRecyclingSystem*))(Il2CppBase() + 0x1C54E80))(this);
	}

};

}
