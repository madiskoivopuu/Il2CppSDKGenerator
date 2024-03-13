#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CongratulationGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CongratulationGuildDialog"));
	}

	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DescriptionPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RewardResourcePanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RewardResourceViews() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CongratulationGuildDialog*))(Il2CppBase() + 0x15E7ECC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CongratulationGuildDialog*))(Il2CppBase() + 0x15E8EAC))(this);
	}
	template <typename T = void> T ShowReward(QuestEntity* quest) {
		return ((T (*)(CongratulationGuildDialog*, QuestEntity*))(Il2CppBase() + 0x15E8318))(this, quest);
	}

};

