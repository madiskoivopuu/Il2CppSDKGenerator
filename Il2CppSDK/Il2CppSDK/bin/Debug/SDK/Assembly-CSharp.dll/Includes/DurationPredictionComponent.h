#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurationPredictionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurationPredictionComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(DurationPredictionComponent*, Il2CppObject*))(Il2CppBase() + 0x1A97854))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DurationPredictionComponent*, uintptr_t))(Il2CppBase() + 0x1A97858))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DurationPredictionComponent*, uintptr_t))(Il2CppBase() + 0x1A97860))(this, writer);
	}

};

