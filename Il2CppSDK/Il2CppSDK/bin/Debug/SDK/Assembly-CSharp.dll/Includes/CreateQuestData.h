#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateQuestData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	 Nullable1int64_t>*& StartTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1int64_t>*& EndTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& Completed() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& Rewarded() {
		return *(R*)((uintptr_t)this + 0x35);
	}
	template <typename R = bool> R& PremiumRewarded() {
		return *(R*)((uintptr_t)this + 0x36);
	}
	template <typename R = bool> R& Actual() {
		return *(R*)((uintptr_t)this + 0x37);
	}
	template <typename R = int64_t> R& OwnerId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& Tracking() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& NotStarted() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = int64_t> R& GuildQuestId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& RewardCoef() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<Resource*>*> R& GeneretedResources() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<Resource*>*> R& GeneretedPremiumResources() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateQuestData*, uintptr_t))(Il2CppBase() + 0x1BCD2E4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(CreateQuestData*, uintptr_t, bool))(Il2CppBase() + 0x1BCD4F8))(this, reader, checkAvailableBytes);
	}

};

