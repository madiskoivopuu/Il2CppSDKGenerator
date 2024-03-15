#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CutsceneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CutsceneController"));
	}

	template <typename R = uintptr_t> R& Camera() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = HideHelper*> R& Player() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Canvas() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsFinished() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Variants() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R SetVariant(int32_t index) {
		return ((R (*)(CutsceneController*, int32_t))(Il2CppBase() + 0x163EAD4))(this, index);
	}

};

