#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class FloatValueComponent : public TypeValueComponent1<float>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatValueComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FloatValueComponent*, uintptr_t))(Il2CppBase() + 0x15F744C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FloatValueComponent*, uintptr_t))(Il2CppBase() + 0x15F74B8))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(FloatValueComponent*, Il2CppObject*))(Il2CppBase() + 0x15F74D8))(this, blueprintComponent);
	}

};

