#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PolyAndCodeUI {

class ICell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PolyAndCodeUI", "ICell"));
	}



};

}
