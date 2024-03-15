#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringValuesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValuesComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Contains(Il2CppString* name) {
		return ((R (*)(StringValuesComponent*, Il2CppString*))(Il2CppBase() + 0x16A0C1C))(this, name);
	}
	template <typename R = bool> R IsEmpty() {
		return ((R (*)(StringValuesComponent*))(Il2CppBase() + 0x16A0CB8))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(StringValuesComponent*, Il2CppObject*))(Il2CppBase() + 0x16A0CD8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StringValuesComponent*, uintptr_t))(Il2CppBase() + 0x16A0D70))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StringValuesComponent*, uintptr_t))(Il2CppBase() + 0x16A0DE0))(this, writer);
	}

};

