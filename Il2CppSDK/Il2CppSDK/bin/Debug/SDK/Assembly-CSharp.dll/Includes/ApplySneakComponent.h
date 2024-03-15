#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySneakComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySneakComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplySneakComponent*, Il2CppObject*))(Il2CppBase() + 0x1895534))(this, targetObject);
	}

};

