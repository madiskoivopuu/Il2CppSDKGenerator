#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDurationPreditionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDurationPreditionSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1MagicEntity*>*& _magics() {
		return *(IGroup1MagicEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MagicDurationPreditionSystem*))(Il2CppBase() + 0x1ACE044))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MagicDurationPreditionSystem*))(Il2CppBase() + 0x1ACE42C))(this);
	}

};

