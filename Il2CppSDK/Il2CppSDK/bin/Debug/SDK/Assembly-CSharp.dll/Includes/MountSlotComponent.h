#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseEmptyComponent" 

class MountSlotComponent: BaseEmptyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountSlotComponent"));
	}



};

}
