#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "AccountDataCommon" 

class AccountDataLoad: AccountDataCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountDataLoad"));
	}

	template <typename T = int64_t> T& SessionId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = unsigned char> T& CellId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& BattleTag() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WorldStatus() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsGooglePlayConnected() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& IsGamecenterConnected() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = Il2CppString*> T& KefirId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& IsDeepLog() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Currencies() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int64_t> T& TournamentStartSearchingTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& Dev2DevId() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& OccupationType() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BlockedPushes() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PurchaseHistory() {
		return *(T*)((uintptr_t)this + 0x120);
	}


};

}
