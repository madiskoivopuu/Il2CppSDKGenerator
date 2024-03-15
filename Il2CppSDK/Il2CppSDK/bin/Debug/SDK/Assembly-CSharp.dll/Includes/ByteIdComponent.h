#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeIdComponent1.h" 

class ByteIdComponent : public TypeIdComponent1<uint8_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteIdComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ByteIdComponent*, uintptr_t))(Il2CppBase() + 0x15B23E4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ByteIdComponent*, uintptr_t))(Il2CppBase() + 0x15B2450))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ByteIdComponent*, Il2CppObject*))(Il2CppBase() + 0x15B2474))(this, blueprintComponent);
	}

};

