#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeNameComponent`1" 

class StringNameComponent: TypeNameComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringNameComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringNameComponent*, uintptr_t))(Il2CppBase() + 0x16A01C4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringNameComponent*, uintptr_t))(Il2CppBase() + 0x16A0230))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(StringNameComponent*, uintptr_t))(Il2CppBase() + 0x16A0244))(this, blueprintComponent);
	}

};

}
