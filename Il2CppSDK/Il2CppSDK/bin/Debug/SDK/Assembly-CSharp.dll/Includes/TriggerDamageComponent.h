#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDamageComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x1525654))(this, target);
	}

};

