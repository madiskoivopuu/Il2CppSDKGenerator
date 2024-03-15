#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumValueComponent1.h" 
#include "MagicTriggerType.h" 

class MagicTriggerTypeComponent : public EnumValueComponent1<MagicTriggerType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerTypeComponent"));
	}



};

