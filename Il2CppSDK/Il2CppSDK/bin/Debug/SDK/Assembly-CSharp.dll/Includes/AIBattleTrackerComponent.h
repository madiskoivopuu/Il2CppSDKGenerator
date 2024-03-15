#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIBattleTrackerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIBattleTrackerComponent"));
	}

	template <typename R = EnrageTracker*> R& Enrage() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<MagicTracker*>*> R& Magics() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AIBattleTrackerComponent*, Il2CppObject*))(Il2CppBase() + 0x1D96234))(this, target);
	}

};

