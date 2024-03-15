#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySelectClassComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySelectClassComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplySelectClassComponent*, Il2CppObject*))(Il2CppBase() + 0x1895474))(this, target);
	}

};

