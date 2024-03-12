#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Types() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MagicTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1A2F870))(this, target);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(MagicTriggerComponent*))(Il2CppBase() + 0x1A2F924))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(MagicTriggerComponent*))(Il2CppBase() + 0x1A2F92C))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MagicTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1A2F934))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MagicTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1A2FA0C))(this, writer);
	}

};

}
