#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CutsceneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CutsceneController"));
	}

	template <typename T = uintptr_t> T& Camera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Player() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Canvas() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsFinished() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Variants() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T SetVariant(int32_t index) {
		return ((T (*)(CutsceneController*, int32_t))(Il2CppBase() + 0x163EAD4))(this, index);
	}

};

}
