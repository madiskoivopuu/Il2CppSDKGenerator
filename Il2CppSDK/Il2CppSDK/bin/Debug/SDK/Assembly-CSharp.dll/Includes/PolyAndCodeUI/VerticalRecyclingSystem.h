#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../RecyclingSystem.h" 
namespace PolyAndCodeUI {

class VerticalRecyclingSystem : public RecyclingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "VerticalRecyclingSystem"));
	}

	template <typename R = int32_t> R& _coloumns() {
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
	template <typename R = int32_t> R& topMostCellIndex() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& bottomMostCellIndex() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = int32_t> R& _topMostCellColoumn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _bottomMostCellColoumn() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = uintptr_t> R& zeroVector() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = uintptr_t> R InitCoroutine(uintptr_t onInitialized) {
		return ((R (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C4E58))(this, onInitialized);
	}
	template <typename R = void> R SetRecyclingBounds() {
		return ((R (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C4EEC))(this);
	}
	template <typename R = void> R CreateCellPool() {
		return ((R (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C4F9C))(this);
	}
	template <typename R = uintptr_t> R OnValueChangedListener(uintptr_t direction) {
		return ((R (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C590C))(this, direction);
	}
	template <typename R = uintptr_t> R RecycleTopToBottom() {
		return ((R (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C5A50))(this);
	}
	template <typename R = uintptr_t> R RecycleBottomToTop() {
		return ((R (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C6100))(this);
	}
	template <typename R = void> R SetTopAnchor(uintptr_t rectTransform) {
		return ((R (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C582C))(this, rectTransform);
	}
	template <typename R = void> R SetTopLeftAnchor(uintptr_t rectTransform) {
		return ((R (*)(VerticalRecyclingSystem*, uintptr_t))(Il2CppBase() + 0x15C5750))(this, rectTransform);
	}
	template <typename R = void> R OnDrawGizmos() {
		return ((R (*)(VerticalRecyclingSystem*))(Il2CppBase() + 0x15C6754))(this);
	}

};

}
