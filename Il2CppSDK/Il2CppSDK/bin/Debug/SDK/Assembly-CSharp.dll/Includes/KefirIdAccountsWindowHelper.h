#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdAccountsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAccountsWindowHelper"));
	}


	template <typename T = KefirIdAccountsWindow*> static T ShowKefirIdAccounts(UIWindowsManager* manager, Il2CppString* kefirId, Il2CppList<LinkingPlayerData*>* players, bool isBonusSent) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppList<LinkingPlayerData*>*, bool))(Il2CppBase() + 0x14E9924))(0, manager, kefirId, players, isBonusSent);
	}

};

