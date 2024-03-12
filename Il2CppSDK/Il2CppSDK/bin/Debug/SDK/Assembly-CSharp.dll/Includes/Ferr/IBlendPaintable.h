#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IBlendPaintable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IBlendPaintable"));
	}


	template <typename T = void> T OnPainterSelected(uintptr_t aPainter) {
		return ((T (*)(IBlendPaintable*, uintptr_t))(Il2CppBase() + 0x0))(this, aPainter);
	}
	template <typename T = void> T OnPainterUnselected(uintptr_t aPainter) {
		return ((T (*)(IBlendPaintable*, uintptr_t))(Il2CppBase() + 0x0))(this, aPainter);
	}

};

}
