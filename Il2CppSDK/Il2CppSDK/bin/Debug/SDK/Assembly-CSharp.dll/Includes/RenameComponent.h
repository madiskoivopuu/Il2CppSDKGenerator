#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntCountComponent.h" 

class RenameComponent : public IntCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenameComponent"));
	}



};

