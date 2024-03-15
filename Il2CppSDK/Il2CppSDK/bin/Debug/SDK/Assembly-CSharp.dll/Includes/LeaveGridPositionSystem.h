#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeaveGridPositionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveGridPositionSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ClanEntity*>* GetTrigger(IContext1<ClanEntity*>* context) {
		return ((ICollector1<ClanEntity*>* (*)(LeaveGridPositionSystem*, IContext1<ClanEntity*>*))(Il2CppBase() + 0x142A19C))(this, context);
	}
	template <typename R = bool> R Filter(ClanEntity* clan) {
		return ((R (*)(LeaveGridPositionSystem*, ClanEntity*))(Il2CppBase() + 0x142A268))(this, clan);
	}
	template <typename R = void> R Execute(Il2CppList<ClanEntity*>* clans) {
		return ((R (*)(LeaveGridPositionSystem*, Il2CppList<ClanEntity*>*))(Il2CppBase() + 0x142A270))(this, clans);
	}

};

