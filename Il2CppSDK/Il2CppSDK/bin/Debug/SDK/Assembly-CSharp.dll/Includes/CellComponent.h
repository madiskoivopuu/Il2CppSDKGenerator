#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ByteIdComponent" 

class CellComponent: ByteIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CellComponent"));
	}



};

}
