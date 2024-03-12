#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class IRecyclableScrollRectDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "IRecyclableScrollRectDataSource"));
	}


	template <typename T = int32_t> T GetItemCount() {
		return ((T (*)(IRecyclableScrollRectDataSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetCell(uintptr_t cell, int32_t index) {
		return ((T (*)(IRecyclableScrollRectDataSource*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, cell, index);
	}
	template <typename T = uintptr_t> T get_OnInitialize() {
		return ((T (*)(IRecyclableScrollRectDataSource*))(Il2CppBase() + 0x0))(this);
	}

};

}
