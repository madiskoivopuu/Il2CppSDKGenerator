#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HungerAndThirstData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HungerAndThirstData"));
	}

	template <typename T = float> T& Hunger() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Thirst() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(HungerAndThirstData*, uintptr_t))(Il2CppBase() + 0x1E3382C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(HungerAndThirstData*, uintptr_t))(Il2CppBase() + 0x1E33880))(this, reader);
	}

};

}
