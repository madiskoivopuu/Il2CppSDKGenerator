#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinSwapData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinSwapData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MannequinSwapData*, uintptr_t))(Il2CppBase() + 0x1261BF0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MannequinSwapData*, uintptr_t))(Il2CppBase() + 0x1261C34))(this, reader);
	}

};
