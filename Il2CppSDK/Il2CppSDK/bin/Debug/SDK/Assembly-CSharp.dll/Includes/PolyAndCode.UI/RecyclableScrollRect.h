#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class RecyclableScrollRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "RecyclableScrollRect"));
	}

	template <typename T = uintptr_t> T& DataSource() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& IsGrid() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& PrototypeCell() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& SelfInitialize() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& Direction() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& _segments() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _recyclingSystem() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppVector2> T& _prevAnchoredPos() {
		return *(T*)((uintptr_t)this + 0x158);
	}

	template <typename T = void> T set_Segments(int32_t value) {
		return ((T (*)(RecyclableScrollRect*, int32_t))(Il2CppBase() + 0x139D814))(this, value);
	}
	template <typename T = int32_t> T get_Segments() {
		return ((T (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139D890))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139D898))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139D8E0))(this);
	}
	template <typename T = void> T Initialize_1(uintptr_t dataSource) {
		return ((T (*)(RecyclableScrollRect*, uintptr_t))(Il2CppBase() + 0x139DB24))(this, dataSource);
	}
	template <typename T = void> T OnValueChangedListener(Il2CppVector2 normalizedPos) {
		return ((T (*)(RecyclableScrollRect*, Il2CppVector2))(Il2CppBase() + 0x139DB50))(this, normalizedPos);
	}
	template <typename T = void> T ReloadData() {
		return ((T (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139DBD4))(this);
	}
	template <typename T = void> T ReloadData_1(uintptr_t dataSource) {
		return ((T (*)(RecyclableScrollRect*, uintptr_t))(Il2CppBase() + 0x139DBDC))(this, dataSource);
	}
	template <typename T = void> T Initializeb__13_0() {
		return ((T (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139DD68))(this);
	}
	template <typename T = void> T ReloadDatab__17_0() {
		return ((T (*)(RecyclableScrollRect*))(Il2CppBase() + 0x139DEC0))(this);
	}

};

}
