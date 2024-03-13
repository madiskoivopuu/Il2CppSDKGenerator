#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseActionComponent.h" 

class ResurrectActionComponent : public BaseActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResurrectActionComponent"));
	}



};

