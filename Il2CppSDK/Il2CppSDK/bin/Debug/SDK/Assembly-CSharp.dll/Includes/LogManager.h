#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogManager"));
	}

	template <typename R = bool> R& logActive() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& debugLog() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = bool> R& includeWarnings() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = bool> R& takeScreenshot() {
		return *(R*)((uintptr_t)this + 0x1B);
	}
	template <typename R = UBLog*> R& tLog() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R get_LogFilePath() {
		return ((R (*)(LogManager*))(Il2CppBase() + 0x17263C8))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(LogManager*))(Il2CppBase() + 0x17263E4))(this);
	}
	template <typename R = Il2CppArray<uint8_t>*> R TryGetLogFile() {
		return ((R (*)(LogManager*))(Il2CppBase() + 0x17264F4))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(LogManager*))(Il2CppBase() + 0x1726520))(this);
	}

};

