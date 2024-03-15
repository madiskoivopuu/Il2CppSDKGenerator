#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressQuestComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ProgressQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x16E54B8))(this, targetObject);
	}

};

