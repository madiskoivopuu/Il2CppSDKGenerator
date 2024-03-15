#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerHelper"));
	}


	template <typename R = int32_t> static R GetParentMagicCount(MagicTriggerEntity* trigger, ICommonContexts* world) {
		return ((R (*)(void *, MagicTriggerEntity*, ICommonContexts*))(Il2CppBase() + 0x1A45F74))(0, trigger, world);
	}
	template <typename R = void> static R ResetTriggers(MagicEntity* magic, ICommonContexts* world) {
		return ((R (*)(void *, MagicEntity*, ICommonContexts*))(Il2CppBase() + 0x1A46070))(0, magic, world);
	}
	template <typename R = bool> static R CheckActive(MagicTriggerEntity* magicTrigger, ICommonContexts* world, ItemEntity* withItem, GameEntity* triggetTarget, MagicEntity* parentMagic) {
		return ((R (*)(void *, MagicTriggerEntity*, ICommonContexts*, ItemEntity*, GameEntity*, MagicEntity*))(Il2CppBase() + 0x1A46284))(0, magicTrigger, world, withItem, triggetTarget, parentMagic);
	}

};

