#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UBLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UBLog"));
	}

	template <typename R = Il2CppString*> R& logFilePath() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& debugLog() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& includeWarnings() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = uintptr_t> R& _fileWriter() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& disposed() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Dispose(bool disposing) {
		return ((R (*)(UBLog*, bool))(Il2CppBase() + 0x102C9D8))(this, disposing);
	}
	template <typename R = void> R Dispose_1() {
		return ((R (*)(UBLog*))(Il2CppBase() + 0x102CAA0))(this);
	}
	template <typename R = void> R Finalize() {
		return ((R (*)(UBLog*))(Il2CppBase() + 0x102CB18))(this);
	}
	template <typename R = Il2CppString*> R initializeLog(bool inCustomPath, Il2CppString* customFilePath, Il2CppString* initMessage, bool debugLog, bool includeWarnings) {
		return ((R (*)(UBLog*, bool, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x102CB8C))(this, inCustomPath, customFilePath, initMessage, debugLog, includeWarnings);
	}
	template <typename R = void> R log(Il2CppString* msg) {
		return ((R (*)(UBLog*, Il2CppString*))(Il2CppBase() + 0x102D21C))(this, msg);
	}
	template <typename R = Il2CppArray<uint8_t>*> R TryGetLogData() {
		return ((R (*)(UBLog*))(Il2CppBase() + 0x102D528))(this);
	}
	template <typename R = void> R HandleLog(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type) {
		return ((R (*)(UBLog*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x102D8CC))(this, condition, stackTrace, type);
	}

};

