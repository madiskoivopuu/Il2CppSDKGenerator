#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringValueComponent.h" 

class HuaweiTokenComponent : public StringValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HuaweiTokenComponent"));
	}



};

