#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurationPredictionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurationPredictionComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DurationPredictionComponent*, Il2CppObject*))(Il2CppBase() + 0x1A97854))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DurationPredictionComponent*, uintptr_t))(Il2CppBase() + 0x1A97858))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DurationPredictionComponent*, uintptr_t))(Il2CppBase() + 0x1A97860))(this, writer);
	}

};

