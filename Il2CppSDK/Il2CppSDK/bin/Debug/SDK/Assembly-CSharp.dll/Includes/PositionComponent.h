#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePositionComponent.h" 

class PositionComponent : public BasePositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionComponent"));
	}


	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PositionComponent*))(Il2CppBase() + 0x16D4844))(this);
	}

};

