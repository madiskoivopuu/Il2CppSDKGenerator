#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeValueComponent1.h" 

class PurchaceErrorComponent : public TypeValueComponent1<ProtoModels::PurchaceErrorEnum>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaceErrorComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PurchaceErrorComponent*, uintptr_t))(Il2CppBase() + 0x11B7430))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PurchaceErrorComponent*, uintptr_t))(Il2CppBase() + 0x11B74AC))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(PurchaceErrorComponent*, Il2CppObject*))(Il2CppBase() + 0x11B74D0))(this, blueprintComponent);
	}

};

