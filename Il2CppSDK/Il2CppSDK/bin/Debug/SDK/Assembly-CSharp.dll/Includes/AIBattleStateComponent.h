#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIBattleStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIBattleStateComponent"));
	}

	template <typename T = int32_t> T& PhaseIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AIBattleStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1D960B0))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AIBattleStateComponent*, uintptr_t))(Il2CppBase() + 0x1D9614C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AIBattleStateComponent*, uintptr_t))(Il2CppBase() + 0x1D961E8))(this, writer);
	}

};

