#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerCraftComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerCraftComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerCraftComponent*, Il2CppObject*))(Il2CppBase() + 0x15255A4))(this, target);
	}

};

