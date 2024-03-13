#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeaveGridPositionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveGridPositionSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ClanEntity*>*> T GetTrigger(IContext1ClanEntity*>* context) {
		return ((T (*)(LeaveGridPositionSystem*, IContext1ClanEntity*>*))(Il2CppBase() + 0x142A19C))(this, context);
	}
	template <typename T = bool> T Filter(ClanEntity* clan) {
		return ((T (*)(LeaveGridPositionSystem*, ClanEntity*))(Il2CppBase() + 0x142A268))(this, clan);
	}
	template <typename T = void> T Execute(Il2CppList<ClanEntity*>* clans) {
		return ((T (*)(LeaveGridPositionSystem*, Il2CppList<ClanEntity*>*))(Il2CppBase() + 0x142A270))(this, clans);
	}

};

