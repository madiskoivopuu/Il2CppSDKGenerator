#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class IRecyclableScrollRectDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "IRecyclableScrollRectDataSource"));
	}


	template <typename R = int32_t> R GetItemCount() {
		return ((R (*)(IRecyclableScrollRectDataSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SetCell(PolyAndCodeUI::ICell* cell, int32_t index) {
		return ((R (*)(IRecyclableScrollRectDataSource*, PolyAndCodeUI::ICell*, int32_t))(Il2CppBase() + 0x0))(this, cell, index);
	}
	template <typename R = uintptr_t> R get_OnInitialize() {
		return ((R (*)(IRecyclableScrollRectDataSource*))(Il2CppBase() + 0x0))(this);
	}

};

}
