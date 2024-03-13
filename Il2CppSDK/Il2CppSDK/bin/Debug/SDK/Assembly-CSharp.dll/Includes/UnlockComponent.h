#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNamesComponent.h" 

class UnlockComponent : public StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockComponent"));
	}



};

