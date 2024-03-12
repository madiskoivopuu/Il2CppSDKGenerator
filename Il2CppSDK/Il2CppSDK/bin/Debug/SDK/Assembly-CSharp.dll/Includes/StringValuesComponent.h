#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringValuesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValuesComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Contains(Il2CppString* name) {
		return ((T (*)(StringValuesComponent*, Il2CppString*))(Il2CppBase() + 0x16A0C1C))(this, name);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(StringValuesComponent*))(Il2CppBase() + 0x16A0CB8))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(StringValuesComponent*, uintptr_t))(Il2CppBase() + 0x16A0CD8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringValuesComponent*, uintptr_t))(Il2CppBase() + 0x16A0D70))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringValuesComponent*, uintptr_t))(Il2CppBase() + 0x16A0DE0))(this, writer);
	}

};

}
