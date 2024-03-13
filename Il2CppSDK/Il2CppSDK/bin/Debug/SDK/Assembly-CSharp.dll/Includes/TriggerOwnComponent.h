#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerOwnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerOwnComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerOwnComponent*, Il2CppObject*))(Il2CppBase() + 0x15258EC))(this, target);
	}

};

