#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyInPvPComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyInPvPComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyInPvPComponent*, Il2CppObject*))(Il2CppBase() + 0x1894584))(this, target);
	}

};

