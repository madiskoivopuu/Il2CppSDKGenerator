#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseItemConditionComponent.h" 

class ItemConditionComponent : public BaseItemConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemConditionComponent"));
	}



};
