#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IBlendPaintable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IBlendPaintable"));
	}


	template <typename T = void> T OnPainterSelected(IBlendPaintType* aPainter) {
		return ((T (*)(IBlendPaintable*, IBlendPaintType*))(Il2CppBase() + 0x0))(this, aPainter);
	}
	template <typename T = void> T OnPainterUnselected(IBlendPaintType* aPainter) {
		return ((T (*)(IBlendPaintable*, IBlendPaintType*))(Il2CppBase() + 0x0))(this, aPainter);
	}

};

}
