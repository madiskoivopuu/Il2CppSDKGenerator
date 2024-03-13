#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringListNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringListNamesComponent"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(StringListNamesComponent*, Il2CppObject*))(Il2CppBase() + 0x169FA30))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringListNamesComponent*, uintptr_t))(Il2CppBase() + 0x169FAC8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringListNamesComponent*, uintptr_t))(Il2CppBase() + 0x169FB38))(this, writer);
	}

};

