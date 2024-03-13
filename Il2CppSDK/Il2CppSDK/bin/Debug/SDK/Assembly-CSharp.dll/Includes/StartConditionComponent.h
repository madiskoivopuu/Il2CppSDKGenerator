#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartConditionComponent"));
	}

	template <typename T = Il2CppString*> T& SourceCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(StartConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x148CAAC))(this, target);
	}

};

