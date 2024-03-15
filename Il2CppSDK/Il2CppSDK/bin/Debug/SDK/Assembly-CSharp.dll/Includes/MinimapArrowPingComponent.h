#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapArrowPingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowPingComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MinimapArrowPingComponent*, Il2CppObject*))(Il2CppBase() + 0x12D2A14))(this, target);
	}

};

