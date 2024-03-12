#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerVisitGlobalMapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerVisitGlobalMapComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerVisitGlobalMapComponent*, uintptr_t))(Il2CppBase() + 0x1526690))(this, target);
	}

};

}
