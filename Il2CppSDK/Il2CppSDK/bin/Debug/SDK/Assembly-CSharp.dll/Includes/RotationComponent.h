#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationComponent"));
	}

	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RotationComponent*, uintptr_t))(Il2CppBase() + 0x11A5660))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RotationComponent*, uintptr_t))(Il2CppBase() + 0x11A56F4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RotationComponent*, uintptr_t))(Il2CppBase() + 0x11A5714))(this, reader);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(RotationComponent*, uintptr_t))(Il2CppBase() + 0x11A5780))(this, blueprintComponent);
	}

};

}
