#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseEmptyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseEmptyComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BaseEmptyComponent*, Il2CppObject*))(Il2CppBase() + 0x166CEC8))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseEmptyComponent*, uintptr_t))(Il2CppBase() + 0x166CECC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseEmptyComponent*, uintptr_t))(Il2CppBase() + 0x166CED4))(this, writer);
	}

};

