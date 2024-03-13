#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class Logger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "Logger"));
	}

	template <typename T = bool> static T& debugLogEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& warningLogEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename T = bool> static T get_DebugLogEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x17272F0))(0);
	}
	template <typename T = void> static T set_DebugLogEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1727354))(0, value);
	}
	template <typename T = bool> static T get_WarningLogEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x17273C0))(0);
	}
	template <typename T = void> static T set_WarningLogEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1727424))(0, value);
	}
	template <typename T = void> static T d(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1727490))(0, msg);
	}
	template <typename T = void> static T w(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x17275C0))(0, msg);
	}
	template <typename T = void> static T e(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x17276F0))(0, msg);
	}
	template <typename T = Il2CppString*> static T describe(Il2CppArray<uintptr_t>* b) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1727820))(0, b);
	}
	template <typename T = Il2CppString*> static T ToLogMessage(Il2CppString* prefix, Il2CppString* logType, Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x17278D0))(0, prefix, logType, msg);
	}

};

}
