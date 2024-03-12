#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealResultParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealResultParams"));
	}

	template <typename T = float> T& StartHeal() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Heal() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& HpHeal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Full() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(HealResultParams*, uintptr_t))(Il2CppBase() + 0x128AB60))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(HealResultParams*, uintptr_t))(Il2CppBase() + 0x128AC5C))(this, writer);
	}

};

}
