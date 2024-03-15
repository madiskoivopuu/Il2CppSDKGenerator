#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentPointsNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentPointsNotificationData"));
	}

	template <typename R = int32_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TournamentPointsNotificationData*, uintptr_t))(Il2CppBase() + 0x1509DF8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TournamentPointsNotificationData*, uintptr_t))(Il2CppBase() + 0x1509E3C))(this, reader);
	}

};

