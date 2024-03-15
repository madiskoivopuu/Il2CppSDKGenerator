#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DetectedQualityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DetectedQualityData"));
	}

	template <typename R = uint8_t> R& DetectedQuality() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DetectedQualityData*, uintptr_t))(Il2CppBase() + 0xEBF914))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DetectedQualityData*, uintptr_t))(Il2CppBase() + 0xEBF958))(this, reader);
	}

};

