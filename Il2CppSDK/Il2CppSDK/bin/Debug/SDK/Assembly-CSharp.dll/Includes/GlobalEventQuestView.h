#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ActQuestView" 

class GlobalEventQuestView: ActQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventQuestView"));
	}

	template <typename T = uintptr_t> T& _fakeRewardPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _fakeResources() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& MaxFakeRewardCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = int32_t> T get_MaxFakeRewardCount() {
		return ((T (*)(GlobalEventQuestView*))(Il2CppBase() + 0x177344C))(this);
	}
	template <typename T = void> T set_MaxFakeRewardCount(int32_t value) {
		return ((T (*)(GlobalEventQuestView*, int32_t))(Il2CppBase() + 0x1773454))(this, value);
	}
	template <typename T = void> T ShowReward(uintptr_t quest, uintptr_t questData) {
		return ((T (*)(GlobalEventQuestView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177345C))(this, quest, questData);
	}

};

}
