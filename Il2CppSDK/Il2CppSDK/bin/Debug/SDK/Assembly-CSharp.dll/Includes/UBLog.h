#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UBLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UBLog"));
	}

	template <typename T = Il2CppString*> T& logFilePath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& debugLog() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& includeWarnings() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& _fileWriter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(UBLog*, bool))(Il2CppBase() + 0x102C9D8))(this, disposing);
	}
	template <typename T = void> T Dispose_1() {
		return ((T (*)(UBLog*))(Il2CppBase() + 0x102CAA0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(UBLog*))(Il2CppBase() + 0x102CB18))(this);
	}
	template <typename T = Il2CppString*> T initializeLog(bool inCustomPath, Il2CppString* customFilePath, Il2CppString* initMessage, bool debugLog, bool includeWarnings) {
		return ((T (*)(UBLog*, bool, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x102CB8C))(this, inCustomPath, customFilePath, initMessage, debugLog, includeWarnings);
	}
	template <typename T = void> T log(Il2CppString* msg) {
		return ((T (*)(UBLog*, Il2CppString*))(Il2CppBase() + 0x102D21C))(this, msg);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TryGetLogData() {
		return ((T (*)(UBLog*))(Il2CppBase() + 0x102D528))(this);
	}
	template <typename T = void> T HandleLog(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(UBLog*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x102D8CC))(this, condition, stackTrace, type);
	}

};

}
