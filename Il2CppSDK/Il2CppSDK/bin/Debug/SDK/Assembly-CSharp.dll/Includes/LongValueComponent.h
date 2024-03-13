#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class LongValueComponent : public TypeValueComponent1<int64_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LongValueComponent*, uintptr_t))(Il2CppBase() + 0x17330BC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LongValueComponent*, uintptr_t))(Il2CppBase() + 0x1733128))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(LongValueComponent*, Il2CppObject*))(Il2CppBase() + 0x173314C))(this, blueprintComponent);
	}

};

