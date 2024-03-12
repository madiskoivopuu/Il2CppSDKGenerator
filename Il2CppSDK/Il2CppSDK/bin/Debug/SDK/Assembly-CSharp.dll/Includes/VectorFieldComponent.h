#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorFieldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorFieldComponent"));
	}

	template <typename T = uintptr_t> static T& CellOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _field() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _next() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& OffsetX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsDirty() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T GetCell(int32_t x, int32_t y) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t))(Il2CppBase() + 0x15C432C))(this, x, y);
	}
	template <typename T = bool> T TryGetCell(int32_t x, int32_t y, uintptr_t* cell) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x15C4388))(this, x, y, cell);
	}
	template <typename T = void> T SetCell(int32_t x, int32_t y, uintptr_t cell) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x15C445C))(this, x, y, cell);
	}
	template <typename T = void*> T get_Next() {
		return ((T (*)(VectorFieldComponent*))(Il2CppBase() + 0x15C44BC))(this);
	}
	template <typename T = void> T Reset(int32_t offsetX, int32_t offsetY) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t))(Il2CppBase() + 0x15C44C4))(this, offsetX, offsetY);
	}
	template <typename T = uintptr_t> T get_Item(int32_t x, int32_t y) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t))(Il2CppBase() + 0x15C4698))(this, x, y);
	}
	template <typename T = uintptr_t> T get_Item_1(uintptr_t coord) {
		return ((T (*)(VectorFieldComponent*, uintptr_t))(Il2CppBase() + 0x15C477C))(this, coord);
	}
	template <typename T = void> T SetDistance(int32_t x, int32_t y, int32_t value) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x15C4860))(this, x, y, value);
	}
	template <typename T = void> T SetVector(int32_t x, int32_t y, float valueX, float valueY) {
		return ((T (*)(VectorFieldComponent*, int32_t, int32_t, float, float))(Il2CppBase() + 0x15C48D8))(this, x, y, valueX, valueY);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(VectorFieldComponent*))(Il2CppBase() + 0x15C495C))(this);
	}

};

}
