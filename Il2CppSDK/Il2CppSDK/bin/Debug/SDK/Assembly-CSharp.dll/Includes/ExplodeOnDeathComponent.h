#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodeOnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeOnDeathComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ExplodeOnDeathComponent*, uintptr_t))(Il2CppBase() + 0x1685844))(this, targetObject);
	}

};

}
