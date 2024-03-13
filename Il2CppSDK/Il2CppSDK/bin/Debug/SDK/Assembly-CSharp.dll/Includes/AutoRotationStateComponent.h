#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoRotationStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoRotationStateComponent"));
	}

	template <typename T = float> T& StartAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& OffsetX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AutoRotationStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1A65A20))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AutoRotationStateComponent*, uintptr_t))(Il2CppBase() + 0x1A65AC4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AutoRotationStateComponent*, uintptr_t))(Il2CppBase() + 0x1A65B8C))(this, writer);
	}

};

