#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerExtractComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerExtractComponent"));
	}

	template <typename R = RequestType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerExtractComponent*, Il2CppObject*))(Il2CppBase() + 0x1525814))(this, target);
	}

};

