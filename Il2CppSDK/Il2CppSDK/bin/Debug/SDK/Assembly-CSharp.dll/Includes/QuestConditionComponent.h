#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& AllWithTag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& AnyWithTag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = QuestStatus> R& Status() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(QuestConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11C82BC))(this, target);
	}

};

