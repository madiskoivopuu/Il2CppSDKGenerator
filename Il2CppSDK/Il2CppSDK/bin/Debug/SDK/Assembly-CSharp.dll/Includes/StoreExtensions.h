#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreExtensions"));
	}


	template <typename T = Store2DataEntity*> static T GetData(Store2Entity* e, Store2DataContext* ctx) {
		return ((T (*)(void *, Store2Entity*, Store2DataContext*))(Il2CppBase() + 0x1420124))(0, e, ctx);
	}
	template <typename T = bool> static T IsProductAvailableForPurchase(AccountEntity* account, ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x142015C))(0, account, world, name);
	}

};

