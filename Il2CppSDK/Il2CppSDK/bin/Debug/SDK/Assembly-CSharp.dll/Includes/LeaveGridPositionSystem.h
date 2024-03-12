#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeaveGridPositionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveGridPositionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(LeaveGridPositionSystem*, void*))(Il2CppBase() + 0x142A19C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t clan) {
		return ((T (*)(LeaveGridPositionSystem*, uintptr_t))(Il2CppBase() + 0x142A268))(this, clan);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* clans) {
		return ((T (*)(LeaveGridPositionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x142A270))(this, clans);
	}

};

}
