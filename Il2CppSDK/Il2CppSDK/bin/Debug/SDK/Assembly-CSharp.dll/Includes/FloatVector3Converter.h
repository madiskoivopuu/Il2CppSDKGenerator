#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeVector3JsonConverter1.h" 

class FloatVector3Converter : public TypeVector3JsonConverter1<Il2CppString*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatVector3Converter"));
	}



};

