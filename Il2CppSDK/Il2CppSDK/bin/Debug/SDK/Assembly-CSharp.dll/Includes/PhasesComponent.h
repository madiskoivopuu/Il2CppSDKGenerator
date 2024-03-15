#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhasesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhasesComponent"));
	}

	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& StartOffset() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Cyclically() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppArray<Phase*>*> R& Phases() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 ValueTuple2<int32_t, int64_t>* GetPhase(int64_t now) {
		return ((ValueTuple2<int32_t, int64_t>* (*)(PhasesComponent*, int64_t))(Il2CppBase() + 0x16F63B4))(this, now);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PhasesComponent*, Il2CppObject*))(Il2CppBase() + 0x16F65A0))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PhasesComponent*, uintptr_t))(Il2CppBase() + 0x16F6658))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PhasesComponent*, uintptr_t))(Il2CppBase() + 0x16F66EC))(this, reader);
	}

};

