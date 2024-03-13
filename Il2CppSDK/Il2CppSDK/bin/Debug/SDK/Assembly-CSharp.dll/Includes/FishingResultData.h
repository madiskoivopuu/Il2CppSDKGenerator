#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingResultData"));
	}

	template <typename T = bool> T& Success() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FishingResultData*, uintptr_t))(Il2CppBase() + 0x169A358))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FishingResultData*, uintptr_t))(Il2CppBase() + 0x169A39C))(this, reader);
	}

};

