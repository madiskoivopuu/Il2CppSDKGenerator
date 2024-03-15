#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class RecyclableScrollRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "RecyclableScrollRect"));
	}

	template <typename R = PolyAndCodeUI::IRecyclableScrollRectDataSource*> R& DataSource() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = bool> R& IsGrid() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& PrototypeCell() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = bool> R& SelfInitialize() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = DirectionType> R& Direction() {
		return *(R*)((uintptr_t)this + 0x144);
	}
	template <typename R = int32_t> R& _segments() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = PolyAndCodeUI::RecyclingSystem*> R& _recyclingSystem() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _prevAnchoredPos() {
		return *(R*)((uintptr_t)this + 0x158);
	}

	template <typename R = void> R set_Segments(int32_t value) {
		return ((R (*)(RecyclableScrollRect*, int32_t))(Il2CppBase() + 0x139D814))(this, value);
	}
	template <typename R = int32_t> R get_Segments() {
		return ((R (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139D890))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139D898))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139D8E0))(this);
	}
	template <typename R = void> R Initialize_1(PolyAndCodeUI::IRecyclableScrollRectDataSource* dataSource) {
		return ((R (*)(RecyclableScrollRect*, PolyAndCodeUI::IRecyclableScrollRectDataSource*))(Il2CppBase() + 0x139DB24))(this, dataSource);
	}
	template <typename R = void> R OnValueChangedListener(uintptr_t normalizedPos) {
		return ((R (*)(RecyclableScrollRect*, uintptr_t))(Il2CppBase() + 0x139DB50))(this, normalizedPos);
	}
	template <typename R = void> R ReloadData() {
		return ((R (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139DBD4))(this);
	}
	template <typename R = void> R ReloadData_1(PolyAndCodeUI::IRecyclableScrollRectDataSource* dataSource) {
		return ((R (*)(RecyclableScrollRect*, PolyAndCodeUI::IRecyclableScrollRectDataSource*))(Il2CppBase() + 0x139DBDC))(this, dataSource);
	}
	template <typename R = void> R Initializeb__13_0() {
		return ((R (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139DD68))(this);
	}
	template <typename R = void> R ReloadDatab__17_0() {
		return ((R (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139DEC0))(this);
	}

};

}
