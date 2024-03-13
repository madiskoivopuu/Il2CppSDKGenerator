#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinishQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinishQuestComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& CheckMaxProgress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IgnoreStart() {
		return *(T*)((uintptr_t)this + 0x21);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(FinishQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x1698C38))(this, targetObject);
	}

};

