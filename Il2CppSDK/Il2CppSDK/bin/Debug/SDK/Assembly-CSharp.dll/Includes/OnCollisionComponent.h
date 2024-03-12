#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCollisionComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(OnCollisionComponent*, uintptr_t))(Il2CppBase() + 0x11DC140))(this, targetObject);
	}

};

}
