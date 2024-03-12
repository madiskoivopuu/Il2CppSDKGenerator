#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMagicComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& SourceDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyMagicComponent*, uintptr_t))(Il2CppBase() + 0x189463C))(this, target);
	}

};

}
