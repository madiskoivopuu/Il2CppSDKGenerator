#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsWindowHelper"));
	}


	template <typename T = void> static T ShowClaimQuestResult(UIWindowsManager* manager, Il2CppString* questName, GiveRewardResult* result) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x18F498C))(0, manager, questName, result);
	}
	template <typename T = ActQuestsWindow*> static T GetActQuests(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x18F4E20))(0, manager);
	}
	template <typename T = ActQuestsWindow*> static T GetOrShowActQuests(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x18F4EB8))(0, manager);
	}

};

