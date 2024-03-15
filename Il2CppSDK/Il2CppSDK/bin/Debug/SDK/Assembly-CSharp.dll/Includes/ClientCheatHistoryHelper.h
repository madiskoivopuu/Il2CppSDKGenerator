#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientCheatHistoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientCheatHistoryHelper"));
	}

	template <typename R = Il2CppString*> static R& CHEAT_HISTORY_INDICES_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHEAT_HISTORY_ENTRY_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHEAT_HISTORY_SEND_CHEAT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHEAT_HISTORY_SEND_CHEAT_ADD_RESOURCES_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CHEAT_HISTORY_LIMIT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static Il2CppList<CheatData>* LoadCheatHistory() {
		return ((Il2CppList<CheatData>* (*)(void *))(Il2CppBase() + 0x19129F0))(0);
	}
	template <typename R = void> static R DeleteCheatHistory() {
		return ((R (*)(void *))(Il2CppBase() + 0x191336C))(0);
	}
	template <typename R = void> static R SaveToHistorySendCheat(Il2CppString* cheatName, int32_t count) {
		return ((R (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x19137DC))(0, cheatName, count);
	}
	template <typename R = void> static R SaveToHistorySendCheatAddResource(Il2CppString* resourceName, int32_t count, Nullable1<float>* durability) {
		return ((R (*)(void *, Il2CppString*, int32_t, Nullable1<float>*))(Il2CppBase() + 0x1913AAC))(0, resourceName, count, durability);
	}

};

