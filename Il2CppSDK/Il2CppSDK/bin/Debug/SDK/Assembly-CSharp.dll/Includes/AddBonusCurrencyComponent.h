#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddBonusCurrencyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddBonusCurrencyComponent"));
	}

	template <typename R = CurrencyType*> R& Currency() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AddBonusCurrencyComponent*, Il2CppObject*))(Il2CppBase() + 0x18AF274))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AddBonusCurrencyComponent*, uintptr_t))(Il2CppBase() + 0x18AF310))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AddBonusCurrencyComponent*, uintptr_t))(Il2CppBase() + 0x18AF3B8))(this, writer);
	}

};

