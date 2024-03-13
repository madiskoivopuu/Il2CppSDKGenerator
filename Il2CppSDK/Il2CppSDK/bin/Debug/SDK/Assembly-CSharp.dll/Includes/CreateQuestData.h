#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateQuestData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Nullable1int64_t>*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int64_t>*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Completed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Rewarded() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> T& PremiumRewarded() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = bool> T& Actual() {
		return *(T*)((uintptr_t)this + 0x37);
	}
	template <typename T = int64_t> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Tracking() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& NotStarted() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = int64_t> T& GuildQuestId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& RewardCoef() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GeneretedResources() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GeneretedPremiumResources() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreateQuestData*, uintptr_t))(Il2CppBase() + 0x1BCD2E4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(CreateQuestData*, uintptr_t, bool))(Il2CppBase() + 0x1BCD4F8))(this, reader, checkAvailableBytes);
	}

};

