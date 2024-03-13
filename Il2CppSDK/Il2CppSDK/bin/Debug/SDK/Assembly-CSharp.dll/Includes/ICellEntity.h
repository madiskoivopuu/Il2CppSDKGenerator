#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICellEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICellEntity"));
	}


	template <typename T = CellComponent*> T get_cell() {
		return ((T (*)(ICellEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCell() {
		return ((T (*)(ICellEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCell(uint8_t newId) {
		return ((T (*)(ICellEntity*, uint8_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceCell(uint8_t newId) {
		return ((T (*)(ICellEntity*, uint8_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveCell() {
		return ((T (*)(ICellEntity*))(Il2CppBase() + 0x0))(this);
	}

};

