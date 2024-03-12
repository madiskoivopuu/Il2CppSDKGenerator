#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringNamesComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Contains(Il2CppString* name) {
		return ((T (*)(StringNamesComponent*, Il2CppString*))(Il2CppBase() + 0x16A0374))(this, name);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(StringNamesComponent*, uintptr_t))(Il2CppBase() + 0x16A0410))(this, blueprintComponent);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(StringNamesComponent*, uintptr_t))(Il2CppBase() + 0x16A0550))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringNamesComponent*, uintptr_t))(Il2CppBase() + 0x16A05E8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringNamesComponent*, uintptr_t))(Il2CppBase() + 0x16A0658))(this, writer);
	}

};

}
