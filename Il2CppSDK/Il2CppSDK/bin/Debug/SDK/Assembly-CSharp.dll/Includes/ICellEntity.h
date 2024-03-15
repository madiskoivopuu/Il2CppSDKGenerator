#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICellEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICellEntity"));
	}


	template <typename R = CellComponent*> R get_cell() {
		return ((R (*)(ICellEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCell() {
		return ((R (*)(ICellEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCell(uint8_t newId) {
		return ((R (*)(ICellEntity*, uint8_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceCell(uint8_t newId) {
		return ((R (*)(ICellEntity*, uint8_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveCell() {
		return ((R (*)(ICellEntity*))(Il2CppBase() + 0x0))(this);
	}

};

