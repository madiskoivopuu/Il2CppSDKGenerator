#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetQuestComponent"));
	}

	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = QuestStatus> R& Status() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GetQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x1770FBC))(this, target);
	}

};

