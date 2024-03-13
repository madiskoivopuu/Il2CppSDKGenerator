#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassWindowHelper"));
	}


	template <typename T = BattlePassWindow*> static T ShowBattlePass(UIWindowsManager* manager, CurrencyType* currencyType) {
		return ((T (*)(void *, UIWindowsManager*, CurrencyType*))(Il2CppBase() + 0x16B7E9C))(0, manager, currencyType);
	}
	template <typename T = BattlePassWindow*> static T ShowBattlePass_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity, CurrencyType* currencyType) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*, CurrencyType*))(Il2CppBase() + 0x16B7F70))(0, manager, dialogueEntity, currencyType);
	}
	template <typename T = BattlePassWindow*> static T ShowSeasonBattlePass(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16B80C0))(0, manager);
	}
	template <typename T = void> static T UpdateStatePrioritized(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16B81D0))(0, manager);
	}

};

