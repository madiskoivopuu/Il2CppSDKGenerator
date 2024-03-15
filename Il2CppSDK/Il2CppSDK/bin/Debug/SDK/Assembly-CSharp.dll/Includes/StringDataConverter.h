#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeDataJsonConverter1.h" 

class StringDataConverter : public TypeDataJsonConverter1<Il2CppString*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringDataConverter"));
	}



};

