#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NameHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameHelper"));
	}

	template <typename T = int32_t> static T& MaxLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClanMaxLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildTagMinLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildTagMaxLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildNameMinLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildNameMaxLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildDescriptionMaxLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildMessageMaxLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MultipleSpaces() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Space() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Punctuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LatinSymbols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Numbers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AdditionalSymbols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SimpleEmojiPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EmojiPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T NormalizeName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155AB08))(0, name);
	}
	template <typename T = void*> static T CheckValidUserName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155ABF4))(0, name);
	}
	template <typename T = void*> static T CheckValidClanName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155AFB4))(0, name);
	}
	template <typename T = void*> static T CheckValidGuildTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B17C))(0, tag);
	}
	template <typename T = void*> static T CheckValidGuildName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B254))(0, name);
	}
	template <typename T = void*> static T CheckValidGuildDescription(Il2CppString* desc) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B41C))(0, desc);
	}
	template <typename T = void*> static T CheckValidGuildMessage(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x155B634))(0, message);
	}
	template <typename T = void*> static T CheckValidText(Il2CppString* text, int32_t minCount, int32_t maxCount, Il2CppArray<uintptr_t>* allowedSymbols) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x155AE0C))(0, text, minCount, maxCount, allowedSymbols);
	}
	template <typename T = void*> static T CheckValidText_1(Il2CppString* text, Il2CppArray<uintptr_t>* allowedSymbols) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x155B84C))(0, text, allowedSymbols);
	}

};

}
