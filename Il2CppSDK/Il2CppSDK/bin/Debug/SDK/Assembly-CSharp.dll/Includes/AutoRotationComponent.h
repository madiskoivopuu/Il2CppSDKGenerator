#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoRotationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoRotationComponent"));
	}

	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AutoRotationComponent*, Il2CppObject*))(Il2CppBase() + 0x1A658F8))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AutoRotationComponent*, uintptr_t))(Il2CppBase() + 0x1A6598C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AutoRotationComponent*, uintptr_t))(Il2CppBase() + 0x1A659F8))(this, writer);
	}

};

