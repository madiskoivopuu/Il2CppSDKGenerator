#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent.h" 

class SequenceIndexComponent : public IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SequenceIndexComponent"));
	}



};

