#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueJsonConverter1.h" 

class IntValueJsonConverter : public TypeValueJsonConverter1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntValueJsonConverter"));
	}



};

