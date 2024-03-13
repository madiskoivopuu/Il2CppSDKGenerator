#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdJsonConverter1.h" 

class ByteIdJsonConverter : public TypeIdJsonConverter1<uint8_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteIdJsonConverter"));
	}



};

