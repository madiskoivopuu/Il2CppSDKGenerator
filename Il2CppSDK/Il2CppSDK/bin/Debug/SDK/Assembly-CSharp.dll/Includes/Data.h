#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Data"));
	}

	template <typename R = EQuestTrackingView*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1ManualQuestTrackerView*>*& OnClickAction() {
		return *(Action1ManualQuestTrackerView*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = QuestEntity*> R& Quest() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& Now() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = int32_t> R get_Key() {
		return ((R (*)(Data*))(Il2CppBase() + 0x1164D98))(this);
	}

};

