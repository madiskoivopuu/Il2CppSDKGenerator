#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIBattleStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIBattleStateComponent"));
	}

	template <typename R = int32_t> R& PhaseIndex() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AIBattleStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1D960B0))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AIBattleStateComponent*, uintptr_t))(Il2CppBase() + 0x1D9614C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AIBattleStateComponent*, uintptr_t))(Il2CppBase() + 0x1D961E8))(this, writer);
	}

};

