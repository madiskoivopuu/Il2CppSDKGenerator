#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent`1" 

class ByteValueComponent: TypeValueComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ByteValueComponent*, uintptr_t))(Il2CppBase() + 0x15B25A8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ByteValueComponent*, uintptr_t))(Il2CppBase() + 0x15B2614))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ByteValueComponent*, uintptr_t))(Il2CppBase() + 0x15B2638))(this, blueprintComponent);
	}

};

}
