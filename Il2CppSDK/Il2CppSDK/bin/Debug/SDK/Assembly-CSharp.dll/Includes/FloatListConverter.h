#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayJsonConverter1.h" 

class FloatListConverter : public TypeArrayJsonConverter1<float>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatListConverter"));
	}



};

