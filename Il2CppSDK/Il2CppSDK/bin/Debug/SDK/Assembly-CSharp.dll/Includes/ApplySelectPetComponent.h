#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySelectPetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySelectPetComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplySelectPetComponent*, Il2CppObject*))(Il2CppBase() + 0x189548C))(this, target);
	}

};

