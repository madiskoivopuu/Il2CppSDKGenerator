#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoRotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoRotationComponent"));
	}

	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AutoRotationComponent*, uintptr_t))(Il2CppBase() + 0x1A658F8))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AutoRotationComponent*, uintptr_t))(Il2CppBase() + 0x1A6598C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AutoRotationComponent*, uintptr_t))(Il2CppBase() + 0x1A659F8))(this, writer);
	}

};

}
