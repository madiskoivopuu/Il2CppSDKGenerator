#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BoolValueComponent.h" 

class ContactOnlineComponent : public BoolValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContactOnlineComponent"));
	}



};

