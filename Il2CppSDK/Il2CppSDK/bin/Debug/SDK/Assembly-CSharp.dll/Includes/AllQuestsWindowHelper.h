#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AllQuestsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllQuestsWindowHelper"));
	}


	template <typename R = void> static R ShowClaimQuestResultNew(UIWindowsManager* manager, Il2CppString* questName, GiveRewardResult result) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, GiveRewardResult))(Il2CppBase() + 0x129DC94))(0, manager, questName, result);
	}
	template <typename R = AllQuestsWindow*> static R GetAllQuests(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x129E234))(0, manager);
	}
	template <typename R = AllQuestsWindow*> static R GetOrShowAllQuests(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x129E2CC))(0, manager);
	}

};

