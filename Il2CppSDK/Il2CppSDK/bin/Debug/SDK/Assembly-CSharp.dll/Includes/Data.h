#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Data"));
	}

	template <typename T = EQuestTrackingView*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Action1ManualQuestTrackerView*>*> T& OnClickAction() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = QuestEntity*> T& Quest() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& Now() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_Key() {
		return ((T (*)(Data*))(Il2CppBase() + 0x1164D98))(this);
	}

};

