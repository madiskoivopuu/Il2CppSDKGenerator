#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageResultComponent"));
	}

	template <typename T = DamageResultParams*> T& Params() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DamageResultComponent*, uintptr_t))(Il2CppBase() + 0x164B504))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DamageResultComponent*, uintptr_t))(Il2CppBase() + 0x164B724))(this, writer);
	}

};

