#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePositionComponent" 

class PositionComponent: BasePositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionComponent"));
	}


	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PositionComponent*))(Il2CppBase() + 0x16D4844))(this);
	}

};

}
