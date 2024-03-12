#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IndestructibleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IndestructibleComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(IndestructibleComponent*, uintptr_t))(Il2CppBase() + 0x1E3F69C))(this, target);
	}

};

}
