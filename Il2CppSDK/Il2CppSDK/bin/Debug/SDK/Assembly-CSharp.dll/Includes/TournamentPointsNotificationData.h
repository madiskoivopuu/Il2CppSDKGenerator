#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentPointsNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentPointsNotificationData"));
	}

	template <typename T = int32_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TournamentPointsNotificationData*, uintptr_t))(Il2CppBase() + 0x1509DF8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TournamentPointsNotificationData*, uintptr_t))(Il2CppBase() + 0x1509E3C))(this, reader);
	}

};

