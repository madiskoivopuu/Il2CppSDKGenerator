#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HorizontalAxisComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HorizontalAxisComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(HorizontalAxisComponent*, Il2CppObject*))(Il2CppBase() + 0x1C534F0))(this, targetObject);
	}

};

