#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeJsonConverter1.h" 
#include "LandType.h" 

class LandJsonConverter : public TypeTypeJsonConverter1<LandType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandJsonConverter"));
	}



};

