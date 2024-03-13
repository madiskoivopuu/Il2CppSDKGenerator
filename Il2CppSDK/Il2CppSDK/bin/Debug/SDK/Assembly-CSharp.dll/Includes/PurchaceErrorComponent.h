#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class PurchaceErrorComponent : public TypeValueComponent1<PurchaceErrorEnum*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaceErrorComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PurchaceErrorComponent*, uintptr_t))(Il2CppBase() + 0x11B7430))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PurchaceErrorComponent*, uintptr_t))(Il2CppBase() + 0x11B74AC))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(PurchaceErrorComponent*, Il2CppObject*))(Il2CppBase() + 0x11B74D0))(this, blueprintComponent);
	}

};

