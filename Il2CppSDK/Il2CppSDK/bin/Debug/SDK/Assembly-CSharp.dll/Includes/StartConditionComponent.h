#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartConditionComponent"));
	}

	template <typename R = Il2CppString*> R& SourceCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StartConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x148CAAC))(this, target);
	}

};

