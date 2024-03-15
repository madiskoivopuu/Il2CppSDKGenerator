#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LostControlData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LostControlData"));
	}

	template <typename R = bool> R& LostControl() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LostControlData*, uintptr_t))(Il2CppBase() + 0x1733654))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LostControlData*, uintptr_t))(Il2CppBase() + 0x17336C8))(this, reader);
	}

};

