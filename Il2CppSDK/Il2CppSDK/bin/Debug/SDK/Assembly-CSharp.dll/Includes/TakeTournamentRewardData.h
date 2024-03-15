#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeTournamentRewardData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeTournamentRewardData"));
	}

	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TakeTournamentRewardData*, uintptr_t))(Il2CppBase() + 0x16A4C24))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TakeTournamentRewardData*, uintptr_t))(Il2CppBase() + 0x16A4C68))(this, reader);
	}

};

