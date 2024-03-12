#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HorizontalAxisComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HorizontalAxisComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(HorizontalAxisComponent*, uintptr_t))(Il2CppBase() + 0x1C534F0))(this, targetObject);
	}

};

}
