#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryComponent.h" 

class InventoryComponent : public BaseInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryComponent"));
	}



};

