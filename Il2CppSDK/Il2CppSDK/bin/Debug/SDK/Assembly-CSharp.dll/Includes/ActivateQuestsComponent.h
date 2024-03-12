#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivateQuestsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivateQuestsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& OnActivate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OnCompleted() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OnRewarded() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OnEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ShareDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& NotStarted() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetNames(uintptr_t state) {
		return ((T (*)(ActivateQuestsComponent*, uintptr_t))(Il2CppBase() + 0x18ACF68))(this, state);
	}
	template <typename T = bool> T IsActivate(Il2CppString* questName) {
		return ((T (*)(ActivateQuestsComponent*, Il2CppString*))(Il2CppBase() + 0x18ACFB4))(this, questName);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ActivateQuestsComponent*, uintptr_t))(Il2CppBase() + 0x18AD0A8))(this, target);
	}

};

}
