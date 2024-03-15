#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoActivateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoActivateComponent"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& QuestCompleted() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& NotStarted() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AutoActivateComponent*, Il2CppObject*))(Il2CppBase() + 0x1A6234C))(this, target);
	}

};

