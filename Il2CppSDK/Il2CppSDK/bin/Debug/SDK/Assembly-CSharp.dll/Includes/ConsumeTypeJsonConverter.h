#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "ConsumeType.h" 

class ConsumeTypeJsonConverter : public TypeEnumJsonConverter1<ConsumeType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConsumeTypeJsonConverter"));
	}



};

