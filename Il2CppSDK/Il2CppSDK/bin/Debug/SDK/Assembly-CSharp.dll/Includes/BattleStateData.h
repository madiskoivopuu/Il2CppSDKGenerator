#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleStateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleStateData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& PhaseIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BattleStateData*, uintptr_t))(Il2CppBase() + 0x16B82C0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BattleStateData*, uintptr_t))(Il2CppBase() + 0x16B8324))(this, reader);
	}

};

}
