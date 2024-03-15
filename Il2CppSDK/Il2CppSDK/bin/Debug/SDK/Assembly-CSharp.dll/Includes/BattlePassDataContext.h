#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "BattlePassEntity.h" 

class BattlePassDataContext : public DataContext1<BattlePassEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassDataContext"));
	}

	template <typename R = Il2CppString*> static R& WithType() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 IGroup1<BattlePassEntity*>*& _showInHudBattlePasses() {
		return *(IGroup1<BattlePassEntity*>**)((uintptr_t)this + 0x110);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(BattlePassDataContext*))(Il2CppBase() + 0x16750C0))(this);
	}
	template <typename R = BattlePassEntity*> R GetEntityWithCurrencyType(CurrencyType type) {
		return ((R (*)(BattlePassDataContext*, CurrencyType))(Il2CppBase() + 0x1675440))(this, type);
	}
	template <typename R = BattlePassEntity*> R GetActiveShowInHudBattlePasses(ICommonContexts* world) {
		return ((R (*)(BattlePassDataContext*, ICommonContexts*))(Il2CppBase() + 0x167551C))(this, world);
	}

};

