#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IgnoreItemParamsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IgnoreItemParamsComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(IgnoreItemParamsComponent*, uintptr_t))(Il2CppBase() + 0x1E3DB3C))(this, targetObject);
	}

};

}
