#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCollisionComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(OnCollisionComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC140))(this, targetObject);
	}

};

