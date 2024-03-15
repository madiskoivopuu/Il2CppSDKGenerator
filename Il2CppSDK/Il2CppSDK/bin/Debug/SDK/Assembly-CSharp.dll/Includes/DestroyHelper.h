#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyHelper"));
	}

	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _detach() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _stopParticles() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _disableTargets() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _disableScripts() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _enableTargets() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& _animatorBool() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _sound() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _destroying() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Play() {
		return ((R (*)(DestroyHelper*))(Il2CppBase() + 0xEBE3FC))(this);
	}

};

