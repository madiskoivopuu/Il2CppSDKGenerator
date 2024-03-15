#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ICommonLogger.h" 

class UnityCommonLogger : public ICommonLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityCommonLogger"));
	}

	template <typename R = LogManager*> R& Logs() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = LogManager*> R get_Logs() {
		return ((R (*)(UnityCommonLogger*))(Il2CppBase() + 0x1538374))(this);
	}
	template <typename R = void> R set_Logs(LogManager* value) {
		return ((R (*)(UnityCommonLogger*, LogManager*))(Il2CppBase() + 0x153837C))(this, value);
	}
	template <typename R = void> R Println(int64_t worldID, Il2CppString* msg, Il2CppString* tag, LoggerLevel level, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(UnityCommonLogger*, int64_t, Il2CppString*, Il2CppString*, LoggerLevel, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1538384))(this, worldID, msg, tag, level, userID, reliable, payload);
	}

};

