#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueJsonConverter1.h" 

class UintValueJsonConverter : public TypeValueJsonConverter1<uint32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UintValueJsonConverter"));
	}



};

