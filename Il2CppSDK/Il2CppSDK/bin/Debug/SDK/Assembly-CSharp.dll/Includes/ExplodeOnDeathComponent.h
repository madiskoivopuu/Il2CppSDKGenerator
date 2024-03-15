#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodeOnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeOnDeathComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ExplodeOnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x1685844))(this, targetObject);
	}

};

