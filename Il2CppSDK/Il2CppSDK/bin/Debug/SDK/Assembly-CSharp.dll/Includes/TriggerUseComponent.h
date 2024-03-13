#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerUseComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerUseComponent*, Il2CppObject*))(Il2CppBase() + 0x1525BB8))(this, target);
	}

};

