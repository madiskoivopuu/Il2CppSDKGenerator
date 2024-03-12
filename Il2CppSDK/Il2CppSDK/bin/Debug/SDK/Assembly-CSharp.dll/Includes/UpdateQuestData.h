#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateQuestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateQuestData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& Completed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& Rewarded() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& PremiumRewarded() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& Actual() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = bool> T& Tracking() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& NotStarted() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = float> T& RewardCoef() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UpdateQuestData*, uintptr_t))(Il2CppBase() + 0x15408A0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(UpdateQuestData*, uintptr_t, bool))(Il2CppBase() + 0x1540954))(this, reader, checkAvailableBytes);
	}

};

}
