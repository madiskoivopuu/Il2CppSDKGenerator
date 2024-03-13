#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicRunesOnOffSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicRunesOnOffSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ModifierEntity*>*> T GetTrigger(IContext1ModifierEntity*>* context) {
		return ((T (*)(MagicRunesOnOffSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x1ADFB0C))(this, context);
	}
	template <typename T = bool> T Filter(ModifierEntity* modifier) {
		return ((T (*)(MagicRunesOnOffSystem*, ModifierEntity*))(Il2CppBase() + 0x1ADFBD8))(this, modifier);
	}
	template <typename T = void> T Execute(Il2CppList<ModifierEntity*>* modifiers) {
		return ((T (*)(MagicRunesOnOffSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x1ADFBF4))(this, modifiers);
	}

};

