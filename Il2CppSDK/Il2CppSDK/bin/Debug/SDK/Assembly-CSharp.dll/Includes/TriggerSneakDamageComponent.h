#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerSneakDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerSneakDamageComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerSneakDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x1525B88))(this, target);
	}

};

