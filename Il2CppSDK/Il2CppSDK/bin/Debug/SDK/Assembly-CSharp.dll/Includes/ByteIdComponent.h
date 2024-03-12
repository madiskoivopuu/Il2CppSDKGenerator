#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdComponent`1" 

class ByteIdComponent: TypeIdComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteIdComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ByteIdComponent*, uintptr_t))(Il2CppBase() + 0x15B23E4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ByteIdComponent*, uintptr_t))(Il2CppBase() + 0x15B2450))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ByteIdComponent*, uintptr_t))(Il2CppBase() + 0x15B2474))(this, blueprintComponent);
	}

};

}
