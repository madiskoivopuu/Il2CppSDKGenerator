#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseDataComponent1.h" 
#include "MagicTriggerDataEntity.h" 

class MagicTriggerDataComponent : public BaseDataComponent1<MagicTriggerDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataComponent"));
	}



};

