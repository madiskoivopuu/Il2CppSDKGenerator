#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent`1" 

class FloatValueComponent: TypeValueComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FloatValueComponent*, uintptr_t))(Il2CppBase() + 0x15F744C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FloatValueComponent*, uintptr_t))(Il2CppBase() + 0x15F74B8))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(FloatValueComponent*, uintptr_t))(Il2CppBase() + 0x15F74D8))(this, blueprintComponent);
	}

};

}
