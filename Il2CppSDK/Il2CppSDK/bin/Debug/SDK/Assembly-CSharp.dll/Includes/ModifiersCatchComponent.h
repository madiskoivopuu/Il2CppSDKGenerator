#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntListComponent.h" 

class ModifiersCatchComponent : public IntListComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifiersCatchComponent"));
	}



};

