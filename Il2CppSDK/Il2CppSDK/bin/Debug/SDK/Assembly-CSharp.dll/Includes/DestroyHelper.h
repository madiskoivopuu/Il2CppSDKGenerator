#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyHelper"));
	}

	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _detach() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _stopParticles() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _disableTargets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _disableScripts() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _enableTargets() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _animatorBool() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _sound() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _destroying() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Play() {
		return ((T (*)(DestroyHelper*))(Il2CppBase() + 0xEBE3FC))(this);
	}

};

