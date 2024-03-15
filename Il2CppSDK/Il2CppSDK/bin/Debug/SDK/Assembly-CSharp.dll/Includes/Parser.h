#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parser"));
	}

	template <typename R = Il2CppString*> static R& WORD_BREAK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& json() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> static R IsWordBreak(char c) {
		return ((R (*)(void *, char))(Il2CppBase() + 0x1157528))(0, c);
	}
	template <typename R = Il2CppObject*> static R Parse(Il2CppString* jsonString) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1157650))(0, jsonString);
	}
	template <typename R = void> R Dispose() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x11577E8))(this);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppObject*>* ParseObject() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppObject*>* (*)(Parser*))(Il2CppBase() + 0x1157824))(this);
	}
	 Il2CppList<Il2CppObject*>* ParseArray() {
		return ((Il2CppList<Il2CppObject*>* (*)(Parser*))(Il2CppBase() + 0x1157DA4))(this);
	}
	template <typename R = Il2CppObject*> R ParseValue() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x11577C0))(this);
	}
	template <typename R = Il2CppObject*> R ParseByToken(TOKEN* token) {
		return ((R (*)(Parser*, TOKEN*))(Il2CppBase() + 0x1157E8C))(this, token);
	}
	template <typename R = Il2CppString*> R ParseString() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x1157B10))(this);
	}
	template <typename R = Il2CppObject*> R ParseNumber() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x1157F64))(this);
	}
	template <typename R = void> R EatWhitespace() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x1158184))(this);
	}
	template <typename R = char> R get_PeekChar() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x1158234))(this);
	}
	template <typename R = char> R get_NextChar() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x1158048))(this);
	}
	template <typename R = Il2CppString*> R get_NextWord() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x11580CC))(this);
	}
	template <typename R = TOKEN*> R get_NextToken() {
		return ((R (*)(Parser*))(Il2CppBase() + 0x115794C))(this);
	}

};

