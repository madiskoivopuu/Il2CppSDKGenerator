#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent.h" 

class CraftActionComponent : public StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftActionComponent"));
	}



};

