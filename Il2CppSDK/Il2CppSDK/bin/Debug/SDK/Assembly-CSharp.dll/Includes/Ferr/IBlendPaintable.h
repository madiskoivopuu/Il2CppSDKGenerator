#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IBlendPaintable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IBlendPaintable"));
	}


	template <typename R = void> R OnPainterSelected(Ferr::IBlendPaintType* aPainter) {
		return ((R (*)(IBlendPaintable*, Ferr::IBlendPaintType*))(Il2CppBase() + 0x0))(this, aPainter);
	}
	template <typename R = void> R OnPainterUnselected(Ferr::IBlendPaintType* aPainter) {
		return ((R (*)(IBlendPaintable*, Ferr::IBlendPaintType*))(Il2CppBase() + 0x0))(this, aPainter);
	}

};

}
