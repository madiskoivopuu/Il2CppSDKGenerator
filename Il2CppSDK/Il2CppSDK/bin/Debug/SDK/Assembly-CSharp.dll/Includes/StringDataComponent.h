#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeDataComponent1.h" 

class StringDataComponent : public TypeDataComponent1<Il2CppString*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringDataComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringDataComponent*, uintptr_t))(Il2CppBase() + 0x169EE94))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringDataComponent*, uintptr_t))(Il2CppBase() + 0x169EF00))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(StringDataComponent*, Il2CppObject*))(Il2CppBase() + 0x169EF14))(this, blueprintComponent);
	}

};

