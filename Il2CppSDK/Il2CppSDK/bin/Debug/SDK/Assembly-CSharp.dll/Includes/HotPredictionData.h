#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HotPredictionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HotPredictionData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& AddHealth() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HotPredictionData*, uintptr_t))(Il2CppBase() + 0x1E336C0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HotPredictionData*, uintptr_t))(Il2CppBase() + 0x1E33714))(this, reader);
	}

};

