#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallCollisionComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(WallCollisionComponent*, Il2CppObject*))(Il2CppBase() + 0x15D1E78))(this, targetObject);
	}

};

