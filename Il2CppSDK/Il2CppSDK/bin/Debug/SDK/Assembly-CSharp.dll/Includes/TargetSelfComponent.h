#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetSelfComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetSelfComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TargetSelfComponent*, Il2CppObject*))(Il2CppBase() + 0x16A5DC8))(this, target);
	}

};

