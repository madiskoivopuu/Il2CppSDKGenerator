#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointLabelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointLabelComponent"));
	}

	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(PointLabelComponent*, uintptr_t))(Il2CppBase() + 0x1574428))(this, targetObject);
	}

};

}
