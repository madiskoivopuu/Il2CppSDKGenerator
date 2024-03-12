#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatMagicProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepeatMagicProcessor"));
	}

	template <typename T = uintptr_t> T& CurrentRepeatMagicComponent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CurrentMagic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CurrentCenter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& World() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T ITargetProcessor_ProcessTarget(uintptr_t actor, uintptr_t target) {
		return ((T (*)(RepeatMagicProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x229E0FC))(this, actor, target);
	}

};

}
