#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LongIdComponent" 

class SenderComponent: LongIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SenderComponent"));
	}



};

}
