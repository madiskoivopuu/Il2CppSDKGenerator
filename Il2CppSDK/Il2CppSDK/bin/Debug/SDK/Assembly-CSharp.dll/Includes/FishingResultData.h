#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingResultData"));
	}

	template <typename R = bool> R& Success() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FishingResultData*, uintptr_t))(Il2CppBase() + 0x169A358))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FishingResultData*, uintptr_t))(Il2CppBase() + 0x169A39C))(this, reader);
	}

};

