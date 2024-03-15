#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputDataForServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputDataForServer"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& MoveToTargetId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InputDataForServer*, uintptr_t))(Il2CppBase() + 0x145FAF0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(InputDataForServer*, uintptr_t))(Il2CppBase() + 0x145FB64))(this, reader);
	}

};

