#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivateQuestsState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivateQuestsState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ActivateQuestsState*> static T& OnActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ActivateQuestsState*> static T& OnCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ActivateQuestsState*> static T& OnRewarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ActivateQuestsState*> static T& OnEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

