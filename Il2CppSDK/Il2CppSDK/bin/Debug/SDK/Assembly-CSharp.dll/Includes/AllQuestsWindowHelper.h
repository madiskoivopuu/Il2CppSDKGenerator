#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AllQuestsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllQuestsWindowHelper"));
	}


	template <typename T = void> static T ShowClaimQuestResultNew(UIWindowsManager* manager, Il2CppString* questName, GiveRewardResult* result) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x129DC94))(0, manager, questName, result);
	}
	template <typename T = AllQuestsWindow*> static T GetAllQuests(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x129E234))(0, manager);
	}
	template <typename T = AllQuestsWindow*> static T GetOrShowAllQuests(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x129E2CC))(0, manager);
	}

};

