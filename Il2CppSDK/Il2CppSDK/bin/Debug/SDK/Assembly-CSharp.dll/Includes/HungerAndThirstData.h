#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HungerAndThirstData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HungerAndThirstData"));
	}

	template <typename R = float> R& Hunger() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Thirst() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HungerAndThirstData*, uintptr_t))(Il2CppBase() + 0x1E3382C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HungerAndThirstData*, uintptr_t))(Il2CppBase() + 0x1E33880))(this, reader);
	}

};

