#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhasesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhasesComponent"));
	}

	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& StartOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Cyclically() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Phases() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> T GetPhase(int64_t now) {
		return ((T (*)(PhasesComponent*, int64_t))(Il2CppBase() + 0x16F63B4))(this, now);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PhasesComponent*, uintptr_t))(Il2CppBase() + 0x16F65A0))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PhasesComponent*, uintptr_t))(Il2CppBase() + 0x16F6658))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PhasesComponent*, uintptr_t))(Il2CppBase() + 0x16F66EC))(this, reader);
	}

};

}
