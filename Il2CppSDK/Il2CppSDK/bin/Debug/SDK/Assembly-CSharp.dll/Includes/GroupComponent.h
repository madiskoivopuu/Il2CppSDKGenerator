#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GroupComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(GroupComponent*, uintptr_t))(Il2CppBase() + 0x12E331C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GroupComponent*, uintptr_t))(Il2CppBase() + 0x12E33B4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GroupComponent*, uintptr_t))(Il2CppBase() + 0x12E352C))(this, writer);
	}

};

}
