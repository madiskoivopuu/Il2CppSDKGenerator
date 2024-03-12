#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveableComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SaveableComponent*, uintptr_t))(Il2CppBase() + 0x1356E08))(this, targetObject);
	}

};

}
