#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTargetNeutralizeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTargetNeutralizeComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyTargetNeutralizeComponent*, Il2CppObject*))(Il2CppBase() + 0x1895620))(this, target);
	}

};

