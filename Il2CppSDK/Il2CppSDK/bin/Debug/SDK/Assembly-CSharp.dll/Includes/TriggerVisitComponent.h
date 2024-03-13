#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerVisitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerVisitComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerVisitComponent*, Il2CppObject*))(Il2CppBase() + 0x1526684))(this, target);
	}

};

