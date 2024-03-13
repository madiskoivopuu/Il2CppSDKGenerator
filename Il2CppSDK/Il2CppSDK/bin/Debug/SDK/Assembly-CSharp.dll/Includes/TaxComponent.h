#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TaxCachedComponent.h" 

class TaxComponent : public TaxCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaxComponent"));
	}



};

