#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayJsonConverter1.h" 

class UintListConverter : public TypeArrayJsonConverter1<uint32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UintListConverter"));
	}



};

