#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LongIdComponent" 

class InviteComponent: LongIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteComponent"));
	}



};

}
