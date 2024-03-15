#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "AccountDataCommon.h" 

class AccountDataLoad : public AccountDataCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountDataLoad"));
	}

	template <typename R = int64_t> R& SessionId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uint8_t> R& CellId() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& BattleTag() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = ProtoModels::WorldStatusType*> R& WorldStatus() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& IsGooglePlayConnected() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = bool> R& IsGamecenterConnected() {
		return *(R*)((uintptr_t)this + 0x8D);
	}
	template <typename R = Il2CppString*> R& KefirId() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& IsDeepLog() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Currencies*> R& Currencies() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = int64_t> R& TournamentStartSearchingTime() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = Il2CppString*> R& Dev2DevId() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Tags() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = OccupationType*> R& OccupationType() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& BlockedPushes() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	 Il2CppList<PurchaseEntry*>*& PurchaseHistory() {
		return *(Il2CppList<PurchaseEntry*>**)((uintptr_t)this + 0x120);
	}


};

