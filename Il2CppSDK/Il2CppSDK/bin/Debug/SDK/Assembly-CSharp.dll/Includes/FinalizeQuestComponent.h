#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeQuestComponent"));
	}

	template <typename R = Il2CppString*> R& Template() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FinalizeQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x1693D10))(this, target);
	}

};
