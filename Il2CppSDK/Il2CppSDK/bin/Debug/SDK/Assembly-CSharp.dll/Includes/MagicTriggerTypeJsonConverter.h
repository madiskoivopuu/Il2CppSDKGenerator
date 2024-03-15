#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ValueEnumJsonConverter1.h" 
#include "MagicTriggerType.h" 

class MagicTriggerTypeJsonConverter : public ValueEnumJsonConverter1<MagicTriggerType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerTypeJsonConverter"));
	}



};

