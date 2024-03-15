#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseDataComponent1.h" 
#include "MagicDataEntity.h" 

class MagicDataComponent : public BaseDataComponent1<MagicDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataComponent"));
	}



};

