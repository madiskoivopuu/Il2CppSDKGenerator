#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneCalculator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneCalculator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _runeStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T ClearStates() {
		return ((T (*)(void *))(Il2CppBase() + 0x11A99F4))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CalcMagicParams(ICommonContexts* world, Il2CppArray<uintptr_t>* runeNames) {
		return ((T (*)(void *, ICommonContexts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11A82BC))(0, world, runeNames);
	}
	template <typename T = void> static T CreateMagics(ICommonContexts* world, GameEntity* target, Il2CppArray<uintptr_t>* runeNames, Il2CppList<MagicEntity*>* result) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, Il2CppArray<uintptr_t>*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x11A9BD8))(0, world, target, runeNames, result);
	}

};

