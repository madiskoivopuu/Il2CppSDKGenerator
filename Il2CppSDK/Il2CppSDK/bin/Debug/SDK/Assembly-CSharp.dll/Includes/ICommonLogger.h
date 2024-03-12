#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonLogger"));
	}

	template <typename T = int64_t> T& ServerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T NeedStackTrace(uintptr_t level) {
		return ((T (*)(ICommonLogger*, uintptr_t))(Il2CppBase() + 0x1E3C4AC))(this, level);
	}
	template <typename T = void> T WriteNet(uintptr_t level, Il2CppString* str, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(ICommonLogger*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E3C4B8))(this, level, str, args);
	}
	template <typename T = void> T PrintlnInfo(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3C588))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename T = void> T PrintlnWarning(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3C5C4))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename T = void> T PrintlnError(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3C600))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename T = void> T PrintlnCritical(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3C63C))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename T = void> T PrintlnHack(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3C678))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename T = void> T PrintlnConsole(Il2CppString* msg, bool ifVerboseOnly) {
		return ((T (*)(ICommonLogger*, Il2CppString*, bool))(Il2CppBase() + 0x1E393A8))(this, msg, ifVerboseOnly);
	}
	template <typename T = void> T PrintlnConsoleWarning(Il2CppString* msg) {
		return ((T (*)(ICommonLogger*, Il2CppString*))(Il2CppBase() + 0x1E39650))(this, msg);
	}
	template <typename T = void> T PrintlnConsoleError(Il2CppString* msg) {
		return ((T (*)(ICommonLogger*, Il2CppString*))(Il2CppBase() + 0x1E396D8))(this, msg);
	}
	template <typename T = void> T PrintlnMetric(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3C6B4))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename T = void> T Println(int64_t worldID, Il2CppString* msg, Il2CppString* tag, uintptr_t level, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, uintptr_t, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, worldID, msg, tag, level, userID, reliable, payload);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ICommonLogger*))(Il2CppBase() + 0x1E3C6F0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ICommonLogger*, int64_t))(Il2CppBase() + 0x1E3C6F8))(this, value);
	}
	template <typename T = void> T Show() {
		return ((T (*)(ICommonLogger*))(Il2CppBase() + 0x1E3C700))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ICommonLogger*))(Il2CppBase() + 0x1E3C704))(this);
	}

};

}
