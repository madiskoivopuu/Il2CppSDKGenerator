#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class StringValueComponent : public TypeValueComponent1<Il2CppString*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringValueComponent*, uintptr_t))(Il2CppBase() + 0x16A0A6C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringValueComponent*, uintptr_t))(Il2CppBase() + 0x16A0AD8))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(StringValueComponent*, Il2CppObject*))(Il2CppBase() + 0x16A0AEC))(this, blueprintComponent);
	}

};

