#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyQuestPhase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyQuestPhase"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = NotifyQuestPhase*> static T& New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = NotifyQuestPhase*> static T& Completed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = NotifyQuestPhase*> static T& Failed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

