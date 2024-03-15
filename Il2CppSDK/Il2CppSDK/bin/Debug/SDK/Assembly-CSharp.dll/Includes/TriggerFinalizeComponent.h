#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerFinalizeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerFinalizeComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerFinalizeComponent*, Il2CppObject*))(Il2CppBase() + 0x15258B0))(this, target);
	}

};

