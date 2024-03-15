#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerVisitGlobalMapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerVisitGlobalMapComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerVisitGlobalMapComponent*, Il2CppObject*))(Il2CppBase() + 0x1526690))(this, target);
	}

};

