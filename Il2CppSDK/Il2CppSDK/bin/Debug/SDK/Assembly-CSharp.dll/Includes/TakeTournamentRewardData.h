#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeTournamentRewardData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeTournamentRewardData"));
	}

	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TakeTournamentRewardData*, uintptr_t))(Il2CppBase() + 0x16A4C24))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TakeTournamentRewardData*, uintptr_t))(Il2CppBase() + 0x16A4C68))(this, reader);
	}

};

}
