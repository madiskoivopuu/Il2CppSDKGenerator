#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallCollisionComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(WallCollisionComponent*, uintptr_t))(Il2CppBase() + 0x15D1E78))(this, targetObject);
	}

};

}
