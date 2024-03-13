#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "CitizenCachedComponent.h" 

class CitizenComponent : public CitizenCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CitizenComponent"));
	}



};

