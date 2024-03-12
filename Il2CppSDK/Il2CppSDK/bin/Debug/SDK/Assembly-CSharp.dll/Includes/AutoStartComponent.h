#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoStartComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoStartComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AutoStartComponent*, uintptr_t))(Il2CppBase() + 0x1A65BE8))(this, targetObject);
	}

};

}
