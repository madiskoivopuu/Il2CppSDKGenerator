#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseEmptyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseEmptyComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseEmptyComponent*, Il2CppObject*))(Il2CppBase() + 0x166CEC8))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseEmptyComponent*, uintptr_t))(Il2CppBase() + 0x166CECC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseEmptyComponent*, uintptr_t))(Il2CppBase() + 0x166CED4))(this, writer);
	}

};

