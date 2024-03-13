#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class BattlePassDataContext : public DataContext1<BattlePassEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassDataContext"));
	}

	template <typename T = Il2CppString*> static T& WithType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IGroup1BattlePassEntity*>*> T& _showInHudBattlePasses() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(BattlePassDataContext*))(Il2CppBase() + 0x16750C0))(this);
	}
	template <typename T = BattlePassEntity*> T GetEntityWithCurrencyType(CurrencyType* type) {
		return ((T (*)(BattlePassDataContext*, CurrencyType*))(Il2CppBase() + 0x1675440))(this, type);
	}
	template <typename T = BattlePassEntity*> T GetActiveShowInHudBattlePasses(ICommonContexts* world) {
		return ((T (*)(BattlePassDataContext*, ICommonContexts*))(Il2CppBase() + 0x167551C))(this, world);
	}

};

