#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerVisitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerVisitComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerVisitComponent*, Il2CppObject*))(Il2CppBase() + 0x1526684))(this, target);
	}

};

