#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class FloatValueComponent : public TypeValueComponent1<float>
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
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(FloatValueComponent*, Il2CppObject*))(Il2CppBase() + 0x15F74D8))(this, blueprintComponent);
	}

};

