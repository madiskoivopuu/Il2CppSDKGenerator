#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleStateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleStateData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& PhaseIndex() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BattleStateData*, uintptr_t))(Il2CppBase() + 0x16B82C0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BattleStateData*, uintptr_t))(Il2CppBase() + 0x16B8324))(this, reader);
	}

};

