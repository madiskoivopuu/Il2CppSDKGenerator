#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentRequestData"));
	}

	template <typename R = Il2CppString*> R& TournamentBlueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GlobalTournamentRequestData*, uintptr_t))(Il2CppBase() + 0x12DB60C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GlobalTournamentRequestData*, uintptr_t))(Il2CppBase() + 0x12DB648))(this, reader);
	}

};

