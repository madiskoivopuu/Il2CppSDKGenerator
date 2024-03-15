#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeDataComponent1.h" 

class StringDataComponent : public TypeDataComponent1<Il2CppString*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringDataComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StringDataComponent*, uintptr_t))(Il2CppBase() + 0x169EE94))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StringDataComponent*, uintptr_t))(Il2CppBase() + 0x169EF00))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(StringDataComponent*, Il2CppObject*))(Il2CppBase() + 0x169EF14))(this, blueprintComponent);
	}

};

