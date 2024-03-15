#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonLogger"));
	}

	template <typename R = int64_t> R& ServerID() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R NeedStackTrace(LoggerLevel* level) {
		return ((R (*)(ICommonLogger*, LoggerLevel*))(Il2CppBase() + 0x1E3C4AC))(this, level);
	}
	template <typename R = void> R WriteNet(uintptr_t level, Il2CppString* str, Il2CppArray<Il2CppObject*>* args) {
		return ((R (*)(ICommonLogger*, uintptr_t, Il2CppString*, Il2CppArray<Il2CppObject*>*))(Il2CppBase() + 0x1E3C4B8))(this, level, str, args);
	}
	template <typename R = void> R PrintlnInfo(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1E3C588))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename R = void> R PrintlnWarning(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1E3C5C4))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename R = void> R PrintlnError(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1E3C600))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename R = void> R PrintlnCritical(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1E3C63C))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename R = void> R PrintlnHack(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1E3C678))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename R = void> R PrintlnConsole(Il2CppString* msg, bool ifVerboseOnly) {
		return ((R (*)(ICommonLogger*, Il2CppString*, bool))(Il2CppBase() + 0x1E393A8))(this, msg, ifVerboseOnly);
	}
	template <typename R = void> R PrintlnConsoleWarning(Il2CppString* msg) {
		return ((R (*)(ICommonLogger*, Il2CppString*))(Il2CppBase() + 0x1E39650))(this, msg);
	}
	template <typename R = void> R PrintlnConsoleError(Il2CppString* msg) {
		return ((R (*)(ICommonLogger*, Il2CppString*))(Il2CppBase() + 0x1E396D8))(this, msg);
	}
	template <typename R = void> R PrintlnMetric(int64_t worldID, Il2CppString* msg, Il2CppString* tag, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1E3C6B4))(this, worldID, msg, tag, userID, reliable, payload);
	}
	template <typename R = void> R Println(int64_t worldID, Il2CppString* msg, Il2CppString* tag, LoggerLevel* level, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, Il2CppObject*>* payload) {
		return ((R (*)(ICommonLogger*, int64_t, Il2CppString*, Il2CppString*, LoggerLevel*, int64_t, bool, Il2CppDictionary<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x0))(this, worldID, msg, tag, level, userID, reliable, payload);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ICommonLogger*))(Il2CppBase() + 0x1E3C6F0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ICommonLogger*, int64_t))(Il2CppBase() + 0x1E3C6F8))(this, value);
	}
	template <typename R = void> R Show() {
		return ((R (*)(ICommonLogger*))(Il2CppBase() + 0x1E3C700))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(ICommonLogger*))(Il2CppBase() + 0x1E3C704))(this);
	}

};

