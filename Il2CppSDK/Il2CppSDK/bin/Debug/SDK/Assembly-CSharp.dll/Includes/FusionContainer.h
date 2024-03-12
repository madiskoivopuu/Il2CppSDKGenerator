#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FusionContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionContainer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _inputContainers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _inputItemPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _outputSlot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _outputItemPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _inputSlots() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _inputSlotsLocked() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_InputSlotsLocked() {
		return ((T (*)(FusionContainer*))(Il2CppBase() + 0x1601F88))(this);
	}
	template <typename T = void> T set_InputSlotsLocked(bool value) {
		return ((T (*)(FusionContainer*, bool))(Il2CppBase() + 0x1601F90))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity) {
		return ((T (*)(FusionContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16021AC))(this, window, entity);
	}

};

}
