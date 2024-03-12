#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddBonusCurrencyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddBonusCurrencyComponent"));
	}

	template <typename T = uintptr_t> T& Currency() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AddBonusCurrencyComponent*, uintptr_t))(Il2CppBase() + 0x18AF274))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AddBonusCurrencyComponent*, uintptr_t))(Il2CppBase() + 0x18AF310))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AddBonusCurrencyComponent*, uintptr_t))(Il2CppBase() + 0x18AF3B8))(this, writer);
	}

};

}
