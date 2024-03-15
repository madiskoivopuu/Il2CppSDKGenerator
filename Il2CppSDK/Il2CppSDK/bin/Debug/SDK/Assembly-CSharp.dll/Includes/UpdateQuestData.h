#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateQuestData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = bool> R& Completed() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& Rewarded() {
		return *(R*)((uintptr_t)this + 0x9);
	}
	template <typename R = bool> R& PremiumRewarded() {
		return *(R*)((uintptr_t)this + 0xA);
	}
	template <typename R = bool> R& Actual() {
		return *(R*)((uintptr_t)this + 0xB);
	}
	template <typename R = bool> R& Tracking() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = bool> R& NotStarted() {
		return *(R*)((uintptr_t)this + 0xD);
	}
	template <typename R = float> R& RewardCoef() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UpdateQuestData*, uintptr_t))(Il2CppBase() + 0x15408A0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(UpdateQuestData*, uintptr_t, bool))(Il2CppBase() + 0x1540954))(this, reader, checkAvailableBytes);
	}

};

