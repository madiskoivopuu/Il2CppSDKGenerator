#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueJsonConverter1.h" 

class LongValueJsonConverter : public TypeValueJsonConverter1<int64_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongValueJsonConverter"));
	}



};

