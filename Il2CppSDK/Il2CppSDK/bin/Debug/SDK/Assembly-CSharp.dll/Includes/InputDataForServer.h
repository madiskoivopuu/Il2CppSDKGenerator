#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputDataForServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputDataForServer"));
	}

	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MoveToTargetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InputDataForServer*, uintptr_t))(Il2CppBase() + 0x145FAF0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(InputDataForServer*, uintptr_t))(Il2CppBase() + 0x145FB64))(this, reader);
	}

};

