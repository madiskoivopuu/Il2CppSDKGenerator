#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringListNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringListNamesComponent"));
	}

	 Il2CppList<Il2CppString*>*& Names() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(StringListNamesComponent*, Il2CppObject*))(Il2CppBase() + 0x169FA30))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StringListNamesComponent*, uintptr_t))(Il2CppBase() + 0x169FAC8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StringListNamesComponent*, uintptr_t))(Il2CppBase() + 0x169FB38))(this, writer);
	}

};

