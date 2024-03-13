#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class UintValueComponent : public TypeValueComponent1<uint32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UintValueComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UintValueComponent*, uintptr_t))(Il2CppBase() + 0x1536A54))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UintValueComponent*, uintptr_t))(Il2CppBase() + 0x1536AC0))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(UintValueComponent*, Il2CppObject*))(Il2CppBase() + 0x1536AE4))(this, blueprintComponent);
	}

};

