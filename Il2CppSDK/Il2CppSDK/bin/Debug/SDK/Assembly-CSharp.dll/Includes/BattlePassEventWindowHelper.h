#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassEventWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassEventWindowHelper"));
	}


	template <typename T = BattlePassEventWindow*> static T ShowEventBattlePass(UIWindowsManager* manager, DialogueEntity* dialogueEntity, CurrencyType* currencyType) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*, CurrencyType*))(Il2CppBase() + 0x1677C10))(0, manager, dialogueEntity, currencyType);
	}

};

