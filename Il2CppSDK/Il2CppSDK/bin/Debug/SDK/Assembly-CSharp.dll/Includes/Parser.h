#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parser"));
	}

	template <typename T = Il2CppString*> static T& WORD_BREAK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& json() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> static T IsWordBreak(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x1157528))(0, c);
	}
	template <typename T = Il2CppObject*> static T Parse(Il2CppString* jsonString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1157650))(0, jsonString);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x11577E8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppObject*>*> T ParseObject() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1157824))(this);
	}
	template <typename T = Il2CppList<Il2CppObject*>*> T ParseArray() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1157DA4))(this);
	}
	template <typename T = Il2CppObject*> T ParseValue() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x11577C0))(this);
	}
	template <typename T = Il2CppObject*> T ParseByToken(TOKEN* token) {
		return ((T (*)(Parser*, TOKEN*))(Il2CppBase() + 0x1157E8C))(this, token);
	}
	template <typename T = Il2CppString*> T ParseString() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1157B10))(this);
	}
	template <typename T = Il2CppObject*> T ParseNumber() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1157F64))(this);
	}
	template <typename T = void> T EatWhitespace() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1158184))(this);
	}
	template <typename T = char> T get_PeekChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1158234))(this);
	}
	template <typename T = char> T get_NextChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x1158048))(this);
	}
	template <typename T = Il2CppString*> T get_NextWord() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x11580CC))(this);
	}
	template <typename T = TOKEN*> T get_NextToken() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x115794C))(this);
	}

};

