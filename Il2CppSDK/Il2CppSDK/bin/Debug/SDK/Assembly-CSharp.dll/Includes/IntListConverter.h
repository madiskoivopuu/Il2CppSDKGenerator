#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayJsonConverter1.h" 

class IntListConverter : public TypeArrayJsonConverter1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntListConverter"));
	}



};

