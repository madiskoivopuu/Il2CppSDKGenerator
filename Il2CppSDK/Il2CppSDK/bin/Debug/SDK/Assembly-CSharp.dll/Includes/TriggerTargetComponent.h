#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerTargetComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x1525B94))(this, target);
	}

};

