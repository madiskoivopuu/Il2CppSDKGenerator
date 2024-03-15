#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NameHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameHelper"));
	}

	template <typename R = int32_t> static R& MaxLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MinLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClanMaxLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildTagMinLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildTagMaxLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildNameMinLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildNameMaxLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildDescriptionMaxLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildMessageMaxLen() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MultipleSpaces() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Space() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Punctuation() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& LatinSymbols() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Numbers() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AdditionalSymbols() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SimpleEmojiPattern() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& EmojiPattern() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> static R NormalizeName(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x155AB08))(0, name);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidUserName(Il2CppString* name) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x155ABF4))(0, name);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidClanName(Il2CppString* name) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x155AFB4))(0, name);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidGuildTag(Il2CppString* tag) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B17C))(0, tag);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidGuildName(Il2CppString* name) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B254))(0, name);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidGuildDescription(Il2CppString* desc) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B41C))(0, desc);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidGuildMessage(Il2CppString* message) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B634))(0, message);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidText(Il2CppString* text, int32_t minCount, int32_t maxCount, Il2CppArray<Il2CppString*>* allowedSymbols) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*, int32_t, int32_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x155AE0C))(0, text, minCount, maxCount, allowedSymbols);
	}
	 static ValueTuple2Il2CppString*, NameError*>* CheckValidText_1(Il2CppString* text, Il2CppArray<Il2CppString*>* allowedSymbols) {
		return ((ValueTuple2Il2CppString*, NameError*>* (*)(void *, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x155B84C))(0, text, allowedSymbols);
	}

};

