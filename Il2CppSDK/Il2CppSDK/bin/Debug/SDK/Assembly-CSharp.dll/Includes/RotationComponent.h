#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationComponent"));
	}

	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RotationComponent*, Il2CppObject*))(Il2CppBase() + 0x11A5660))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RotationComponent*, uintptr_t))(Il2CppBase() + 0x11A56F4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RotationComponent*, uintptr_t))(Il2CppBase() + 0x11A5714))(this, reader);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(RotationComponent*, Il2CppObject*))(Il2CppBase() + 0x11A5780))(this, blueprintComponent);
	}

};

