#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "LocationType.h" 

class LocationTypeComponent : public EnumComponent1<LocationType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationTypeComponent"));
	}


	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(LocationTypeComponent*, Il2CppObject*))(Il2CppBase() + 0x171F1B8))(this, blueprintComponent);
	}

};

