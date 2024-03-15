#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseEmptyComponent.h" 

class RuneSlotComponent : public BaseEmptyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneSlotComponent"));
	}



};

