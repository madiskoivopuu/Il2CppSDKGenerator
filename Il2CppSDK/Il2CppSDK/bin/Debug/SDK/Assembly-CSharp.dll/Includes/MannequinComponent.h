#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MannequinComponent*, Il2CppObject*))(Il2CppBase() + 0x1261BE4))(this, target);
	}

};

