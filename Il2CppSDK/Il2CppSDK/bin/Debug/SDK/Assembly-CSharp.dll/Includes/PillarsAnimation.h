#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PillarsAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PillarsAnimation"));
	}

	template <typename R = Il2CppString*> R& _soundName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _idleCooldownMin() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _idleCooldownMax() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& _actionTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _idleCooldown() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Start() {
		return ((R (*)(PillarsAnimation*))(Il2CppBase() + 0x16F6BD4))(this);
	}
	template <typename R = uintptr_t> R StartAction() {
		return ((R (*)(PillarsAnimation*))(Il2CppBase() + 0x16F6CF8))(this);
	}

};

