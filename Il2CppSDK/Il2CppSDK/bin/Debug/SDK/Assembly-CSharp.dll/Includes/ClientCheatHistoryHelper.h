#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientCheatHistoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientCheatHistoryHelper"));
	}

	template <typename T = Il2CppString*> static T& CHEAT_HISTORY_INDICES_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHEAT_HISTORY_ENTRY_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHEAT_HISTORY_SEND_CHEAT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHEAT_HISTORY_SEND_CHEAT_ADD_RESOURCES_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CHEAT_HISTORY_LIMIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppList<CheatData*>*> static T LoadCheatHistory() {
		return ((T (*)(void *))(Il2CppBase() + 0x19129F0))(0);
	}
	template <typename T = void> static T DeleteCheatHistory() {
		return ((T (*)(void *))(Il2CppBase() + 0x191336C))(0);
	}
	template <typename T = void> static T SaveToHistorySendCheat(Il2CppString* cheatName, int32_t count) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x19137DC))(0, cheatName, count);
	}
	template <typename T = void> static T SaveToHistorySendCheatAddResource(Il2CppString* resourceName, int32_t count, Nullable1float>* durability) {
		return ((T (*)(void *, Il2CppString*, int32_t, Nullable1float>*))(Il2CppBase() + 0x1913AAC))(0, resourceName, count, durability);
	}

};

