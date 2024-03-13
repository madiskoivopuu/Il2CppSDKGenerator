#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerSneakComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerSneakComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerSneakComponent*, Il2CppObject*))(Il2CppBase() + 0x1525B7C))(this, target);
	}

};

