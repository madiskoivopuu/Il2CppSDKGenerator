#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorFieldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorFieldComponent"));
	}

	template <typename R = VectorCell> static R& CellOut() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& Width() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Height() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _field() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Queue1<Coord>*& _next() {
		return *(Queue1<Coord>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& OffsetX() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& OffsetY() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& IsDirty() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = uintptr_t> R GetCell(int32_t x, int32_t y) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t))(Il2CppBase() + 0x15C432C))(this, x, y);
	}
	template <typename R = bool> R TryGetCell(int32_t x, int32_t y, uintptr_t* cell) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x15C4388))(this, x, y, cell);
	}
	template <typename R = void> R SetCell(int32_t x, int32_t y, VectorCell cell) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t, VectorCell))(Il2CppBase() + 0x15C445C))(this, x, y, cell);
	}
	 Queue1<Coord>* get_Next() {
		return ((Queue1<Coord>* (*)(VectorFieldComponent*))(Il2CppBase() + 0x15C44BC))(this);
	}
	template <typename R = void> R Reset(int32_t offsetX, int32_t offsetY) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t))(Il2CppBase() + 0x15C44C4))(this, offsetX, offsetY);
	}
	template <typename R = uintptr_t> R get_Item(int32_t x, int32_t y) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t))(Il2CppBase() + 0x15C4698))(this, x, y);
	}
	template <typename R = uintptr_t> R get_Item_1(Coord coord) {
		return ((R (*)(VectorFieldComponent*, Coord))(Il2CppBase() + 0x15C477C))(this, coord);
	}
	template <typename R = void> R SetDistance(int32_t x, int32_t y, int32_t value) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x15C4860))(this, x, y, value);
	}
	template <typename R = void> R SetVector(int32_t x, int32_t y, float valueX, float valueY) {
		return ((R (*)(VectorFieldComponent*, int32_t, int32_t, float, float))(Il2CppBase() + 0x15C48D8))(this, x, y, valueX, valueY);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(VectorFieldComponent*))(Il2CppBase() + 0x15C495C))(this);
	}

};

