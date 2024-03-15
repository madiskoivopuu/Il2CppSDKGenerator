#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageResultComponent"));
	}

	template <typename R = DamageResultParams*> R& Params() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DamageResultComponent*, uintptr_t))(Il2CppBase() + 0x164B504))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DamageResultComponent*, uintptr_t))(Il2CppBase() + 0x164B724))(this, writer);
	}

};

