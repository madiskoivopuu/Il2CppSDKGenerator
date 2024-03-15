#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringNamesComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Contains(Il2CppString* name) {
		return ((R (*)(StringNamesComponent*, Il2CppString*))(Il2CppBase() + 0x16A0374))(this, name);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(StringNamesComponent*, Il2CppObject*))(Il2CppBase() + 0x16A0410))(this, blueprintComponent);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(StringNamesComponent*, Il2CppObject*))(Il2CppBase() + 0x16A0550))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StringNamesComponent*, uintptr_t))(Il2CppBase() + 0x16A05E8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StringNamesComponent*, uintptr_t))(Il2CppBase() + 0x16A0658))(this, writer);
	}

};

