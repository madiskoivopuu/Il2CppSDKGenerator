#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIBattleTrackerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIBattleTrackerComponent"));
	}

	template <typename T = uintptr_t> T& Enrage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Magics() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AIBattleTrackerComponent*, uintptr_t))(Il2CppBase() + 0x1D96234))(this, target);
	}

};

}
