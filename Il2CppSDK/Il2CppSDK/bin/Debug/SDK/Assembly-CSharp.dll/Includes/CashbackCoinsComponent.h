#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntCountComponent" 

class CashbackCoinsComponent: IntCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CashbackCoinsComponent"));
	}



};

}
