#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PillarsAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PillarsAnimation"));
	}

	template <typename T = Il2CppString*> T& _soundName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _idleCooldownMin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _idleCooldownMax() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _actionTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _idleCooldown() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PillarsAnimation*))(Il2CppBase() + 0x16F6BD4))(this);
	}
	template <typename T = uintptr_t> T StartAction() {
		return ((T (*)(PillarsAnimation*))(Il2CppBase() + 0x16F6CF8))(this);
	}

};

}
