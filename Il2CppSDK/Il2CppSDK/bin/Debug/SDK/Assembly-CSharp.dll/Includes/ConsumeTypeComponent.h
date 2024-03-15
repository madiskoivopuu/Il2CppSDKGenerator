#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "ConsumeType.h" 

class ConsumeTypeComponent : public EnumComponent1<ConsumeType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConsumeTypeComponent"));
	}



};

