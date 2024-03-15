#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinishQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinishQuestComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& CheckMaxProgress() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IgnoreStart() {
		return *(R*)((uintptr_t)this + 0x21);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FinishQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x1698C38))(this, targetObject);
	}

};

