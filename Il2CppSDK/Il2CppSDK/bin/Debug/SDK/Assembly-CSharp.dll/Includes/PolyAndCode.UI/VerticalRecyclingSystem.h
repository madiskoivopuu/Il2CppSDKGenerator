#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../PolyAndCode.UI/RecyclingSystem.h" 
namespace PolyAndCodeUI {

class VerticalRecyclingSystem : public RecyclingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "VerticalRecyclingSystem"));
	}

	template <typename T = int32_t> T& _coloumns() {
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
	template <typename T = Il2CppList<ICell*>*> T& _cachedCells() {
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
	template <typename T = int32_t> T& topMostCellIndex() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& bottomMostCellIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _topMostCellColoumn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _bottomMostCellColoumn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& zeroVector() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = uintptr_t> T InitCoroutine(uintptr_t onInitialized) {
		return ((T (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C4E58))(this, onInitialized);
	}
	template <typename T = void> T SetRecyclingBounds() {
		return ((T (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C4EEC))(this);
	}
	template <typename T = void> T CreateCellPool() {
		return ((T (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C4F9C))(this);
	}
	template <typename T = uintptr_t> T OnValueChangedListener(uintptr_t direction) {
		return ((T (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C590C))(this, direction);
	}
	template <typename T = uintptr_t> T RecycleTopToBottom() {
		return ((T (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C5A50))(this);
	}
	template <typename T = uintptr_t> T RecycleBottomToTop() {
		return ((T (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C6100))(this);
	}
	template <typename T = void> T SetTopAnchor(uintptr_t rectTransform) {
		return ((T (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C582C))(this, rectTransform);
	}
	template <typename T = void> T SetTopLeftAnchor(uintptr_t rectTransform) {
		return ((T (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C5750))(this, rectTransform);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C6754))(this);
	}

};

}
