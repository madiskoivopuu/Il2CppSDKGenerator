#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdJsonConverter1.h" 

class LongIdJsonConverter : public TypeIdJsonConverter1<int64_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongIdJsonConverter"));
	}



};

