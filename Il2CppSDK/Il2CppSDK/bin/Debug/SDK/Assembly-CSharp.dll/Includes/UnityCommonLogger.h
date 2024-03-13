#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ICommonLogger.h" 

class UnityCommonLogger : public ICommonLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityCommonLogger"));
	}

	template <typename T = LogManager*> T& Logs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = LogManager*> T get_Logs() {
		return ((T (*)(UnityCommonLogger*))(Il2CppBase() + 0x1538374))(this);
	}
	template <typename T = void> T set_Logs(LogManager* value) {
		return ((T (*)(UnityCommonLogger*, LogManager*))(Il2CppBase() + 0x153837C))(this, value);
	}
	template <typename T = void> T Println(int64_t worldID, Il2CppString* msg, Il2CppString* tag, LoggerLevel* level, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((T (*)(UnityCommonLogger*, int64_t, Il2CppString*, Il2CppString*, LoggerLevel*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1538384))(this, worldID, msg, tag, level, userID, reliable, payload);
	}

};

