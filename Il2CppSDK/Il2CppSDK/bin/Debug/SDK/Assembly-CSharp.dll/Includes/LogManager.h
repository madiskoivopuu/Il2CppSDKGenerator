#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogManager"));
	}

	template <typename T = bool> T& logActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& debugLog() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& includeWarnings() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& takeScreenshot() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = UBLog*> T& tLog() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_LogFilePath() {
		return ((T (*)(LogManager*))(Il2CppBase() + 0x17263C8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LogManager*))(Il2CppBase() + 0x17263E4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TryGetLogFile() {
		return ((T (*)(LogManager*))(Il2CppBase() + 0x17264F4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LogManager*))(Il2CppBase() + 0x1726520))(this);
	}

};

