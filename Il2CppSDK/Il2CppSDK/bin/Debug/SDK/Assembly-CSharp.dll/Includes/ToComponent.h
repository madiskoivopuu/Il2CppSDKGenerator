#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringValueComponent.h" 

class ToComponent : public StringValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToComponent"));
	}



};

