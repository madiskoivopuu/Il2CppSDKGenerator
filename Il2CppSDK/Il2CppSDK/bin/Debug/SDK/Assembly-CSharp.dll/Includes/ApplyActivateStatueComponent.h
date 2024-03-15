#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActivateStatueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActivateStatueComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyActivateStatueComponent*, Il2CppObject*))(Il2CppBase() + 0x1893280))(this, target);
	}

};

