#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LongValueComponent.h" 

class ResetTimeComponent : public LongValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetTimeComponent"));
	}



};
