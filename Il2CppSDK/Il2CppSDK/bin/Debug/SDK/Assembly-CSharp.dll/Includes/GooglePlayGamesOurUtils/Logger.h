#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class Logger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "Logger"));
	}

	template <typename R = bool> static R& debugLogEnabled() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& warningLogEnabled() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename R = bool> static R get_DebugLogEnabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x17272F0))(0);
	}
	template <typename R = void> static R set_DebugLogEnabled(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1727354))(0, value);
	}
	template <typename R = bool> static R get_WarningLogEnabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x17273C0))(0);
	}
	template <typename R = void> static R set_WarningLogEnabled(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1727424))(0, value);
	}
	template <typename R = void> static R d(Il2CppString* msg) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1727490))(0, msg);
	}
	template <typename R = void> static R w(Il2CppString* msg) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x17275C0))(0, msg);
	}
	template <typename R = void> static R e(Il2CppString* msg) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x17276F0))(0, msg);
	}
	template <typename R = Il2CppString*> static R describe(Il2CppArray<uint8_t>* b) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1727820))(0, b);
	}
	template <typename R = Il2CppString*> static R ToLogMessage(Il2CppString* prefix, Il2CppString* logType, Il2CppString* msg) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x17278D0))(0, prefix, logType, msg);
	}

};

}
