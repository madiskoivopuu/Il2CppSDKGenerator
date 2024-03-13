#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentRequestData"));
	}

	template <typename T = Il2CppString*> T& TournamentBlueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GlobalTournamentRequestData*, uintptr_t))(Il2CppBase() + 0x12DB60C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GlobalTournamentRequestData*, uintptr_t))(Il2CppBase() + 0x12DB648))(this, reader);
	}

};

