#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryContentComponent.h" 

class InventoryContentComponent : public BaseInventoryContentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryContentComponent"));
	}



};

