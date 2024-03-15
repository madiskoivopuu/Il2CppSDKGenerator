#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDonateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDonateComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerDonateComponent*, Il2CppObject*))(Il2CppBase() + 0x15257FC))(this, target);
	}

};

