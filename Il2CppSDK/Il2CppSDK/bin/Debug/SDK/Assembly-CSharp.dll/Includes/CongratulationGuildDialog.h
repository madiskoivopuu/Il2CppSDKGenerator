#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CongratulationGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CongratulationGuildDialog"));
	}

	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& DescriptionPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RewardResourcePanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& RewardResourceViews() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CongratulationGuildDialog*))(Il2CppBase() + 0x15E7ECC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CongratulationGuildDialog*))(Il2CppBase() + 0x15E8EAC))(this);
	}
	template <typename R = void> R ShowReward(QuestEntity* quest) {
		return ((R (*)(CongratulationGuildDialog*, QuestEntity*))(Il2CppBase() + 0x15E8318))(this, quest);
	}

};

