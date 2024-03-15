#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerCraftComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerCraftComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerCraftComponent*, Il2CppObject*))(Il2CppBase() + 0x15255A4))(this, target);
	}

};

