#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LongListComponent.h" 

class QuadOwnerComponent : public LongListComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadOwnerComponent"));
	}



};

