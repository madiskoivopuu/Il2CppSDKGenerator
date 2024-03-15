#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class UintValueComponent : public TypeValueComponent1<uint32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UintValueComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UintValueComponent*, uintptr_t))(Il2CppBase() + 0x1536A54))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UintValueComponent*, uintptr_t))(Il2CppBase() + 0x1536AC0))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(UintValueComponent*, Il2CppObject*))(Il2CppBase() + 0x1536AE4))(this, blueprintComponent);
	}

};

