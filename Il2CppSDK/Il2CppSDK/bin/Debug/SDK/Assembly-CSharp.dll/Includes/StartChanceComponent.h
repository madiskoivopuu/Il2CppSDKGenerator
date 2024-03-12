#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseChanceComponent" 

class StartChanceComponent: BaseChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartChanceComponent"));
	}



};

}
