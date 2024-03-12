#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HotPredictionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HotPredictionData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& AddHealth() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(HotPredictionData*, uintptr_t))(Il2CppBase() + 0x1E336C0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(HotPredictionData*, uintptr_t))(Il2CppBase() + 0x1E33714))(this, reader);
	}

};

}
