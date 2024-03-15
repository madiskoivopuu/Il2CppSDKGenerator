#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AliveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AliveComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AliveComponent*, Il2CppObject*))(Il2CppBase() + 0x129C26C))(this, targetObject);
	}

};

