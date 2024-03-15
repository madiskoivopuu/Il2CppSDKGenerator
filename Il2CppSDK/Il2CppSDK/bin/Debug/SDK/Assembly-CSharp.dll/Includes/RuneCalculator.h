#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneCalculator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneCalculator"));
	}

	template <typename R = Il2CppArray<RuneState>*> static R& _runeStates() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R ClearStates() {
		return ((R (*)(void *))(Il2CppBase() + 0x11A99F4))(0);
	}
	template <typename R = Il2CppArray<MagicParams>*> static R CalcMagicParams(ICommonContexts* world, Il2CppArray<Il2CppString*>* runeNames) {
		return ((R (*)(void *, ICommonContexts*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x11A82BC))(0, world, runeNames);
	}
	template <typename R = void> static R CreateMagics(ICommonContexts* world, GameEntity* target, Il2CppArray<Il2CppString*>* runeNames, Il2CppList<MagicEntity*>* result) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, Il2CppArray<Il2CppString*>*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x11A9BD8))(0, world, target, runeNames, result);
	}

};

