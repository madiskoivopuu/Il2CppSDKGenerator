#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DetectedQualityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DetectedQualityData"));
	}

	template <typename T = uint8_t> T& DetectedQuality() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DetectedQualityData*, uintptr_t))(Il2CppBase() + 0xEBF914))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DetectedQualityData*, uintptr_t))(Il2CppBase() + 0xEBF958))(this, reader);
	}

};

