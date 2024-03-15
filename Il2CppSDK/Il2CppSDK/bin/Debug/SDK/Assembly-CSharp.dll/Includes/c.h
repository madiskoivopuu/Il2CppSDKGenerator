#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c"));
	}

	template <typename R = c*> static R& 9() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Func1BattlePassEntity*>*& 9__2_0() {
		return *(Func1BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Func3BattlePassEntity*, uintptr_t, CurrencyType*>*& 9__3_0() {
		return *(Func3BattlePassEntity*, uintptr_t, CurrencyType*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = BattlePassEntity*> R _ctorb__2_0() {
		return ((R (*)(c*))(Il2CppBase() + 0xEEA3F8))(this);
	}
	template <typename R = CurrencyType*> R AddEntityIndexesb__3_0(BattlePassEntity* e, uintptr_t c) {
		return ((R (*)(c*, BattlePassEntity*, uintptr_t))(Il2CppBase() + 0xEEA450))(this, e, c);
	}

};

