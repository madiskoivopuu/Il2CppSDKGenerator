#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class IntValueComponent : public TypeValueComponent1<int32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntValueComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(IntValueComponent*, uintptr_t))(Il2CppBase() + 0x146A374))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(IntValueComponent*, uintptr_t))(Il2CppBase() + 0x146A3E0))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(IntValueComponent*, Il2CppObject*))(Il2CppBase() + 0x146A404))(this, blueprintComponent);
	}

};

