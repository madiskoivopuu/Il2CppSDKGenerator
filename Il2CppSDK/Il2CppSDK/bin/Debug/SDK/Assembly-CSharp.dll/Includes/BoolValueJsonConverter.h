#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueJsonConverter1.h" 

class BoolValueJsonConverter : public TypeValueJsonConverter1<bool>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoolValueJsonConverter"));
	}



};

