#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringListNamesComponent.h" 

class UnlockedLocationComponent : public StringListNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedLocationComponent"));
	}



};

