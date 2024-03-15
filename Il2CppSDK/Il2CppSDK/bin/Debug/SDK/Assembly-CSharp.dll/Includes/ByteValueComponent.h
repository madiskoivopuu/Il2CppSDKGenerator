#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class ByteValueComponent : public TypeValueComponent1<uint8_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteValueComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ByteValueComponent*, uintptr_t))(Il2CppBase() + 0x15B25A8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ByteValueComponent*, uintptr_t))(Il2CppBase() + 0x15B2614))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ByteValueComponent*, Il2CppObject*))(Il2CppBase() + 0x15B2638))(this, blueprintComponent);
	}

};

