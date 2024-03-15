#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicRunesOnOffSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicRunesOnOffSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ModifierEntity*>* GetTrigger(IContext1<ModifierEntity*>* context) {
		return ((ICollector1<ModifierEntity*>* (*)(MagicRunesOnOffSystem*, IContext1<ModifierEntity*>*))(Il2CppBase() + 0x1ADFB0C))(this, context);
	}
	template <typename R = bool> R Filter(ModifierEntity* modifier) {
		return ((R (*)(MagicRunesOnOffSystem*, ModifierEntity*))(Il2CppBase() + 0x1ADFBD8))(this, modifier);
	}
	template <typename R = void> R Execute(Il2CppList<ModifierEntity*>* modifiers) {
		return ((R (*)(MagicRunesOnOffSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x1ADFBF4))(this, modifiers);
	}

};

