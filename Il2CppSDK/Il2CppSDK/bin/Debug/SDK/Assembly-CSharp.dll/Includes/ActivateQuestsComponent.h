#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivateQuestsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivateQuestsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& OnActivate() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& OnCompleted() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& OnRewarded() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& OnEndTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& ShareDuration() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& NotStarted() {
		return *(R*)((uintptr_t)this + 0x31);
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R GetNames(ActivateQuestsState* state) {
		return ((R (*)(ActivateQuestsComponent*, ActivateQuestsState*))(Il2CppBase() + 0x18ACF68))(this, state);
	}
	template <typename R = bool> R IsActivate(Il2CppString* questName) {
		return ((R (*)(ActivateQuestsComponent*, Il2CppString*))(Il2CppBase() + 0x18ACFB4))(this, questName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ActivateQuestsComponent*, Il2CppObject*))(Il2CppBase() + 0x18AD0A8))(this, target);
	}

};

