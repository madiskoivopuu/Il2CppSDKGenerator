#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoRotationStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoRotationStateComponent"));
	}

	template <typename R = float> R& StartAngle() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& OffsetX() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& OffsetY() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AutoRotationStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1A65A20))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AutoRotationStateComponent*, uintptr_t))(Il2CppBase() + 0x1A65AC4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AutoRotationStateComponent*, uintptr_t))(Il2CppBase() + 0x1A65B8C))(this, writer);
	}

};

