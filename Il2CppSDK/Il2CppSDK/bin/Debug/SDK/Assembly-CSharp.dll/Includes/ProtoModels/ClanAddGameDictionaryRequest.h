#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanAddGameDictionaryRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanAddGameDictionaryRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& KeyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& key_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& value_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x17499CC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1749A30))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749B50))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749C6C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749CC8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ClanAddGameDictionaryRequest*, int64_t))(Il2CppBase() + 0x1749CD0))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749CD8))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ClanAddGameDictionaryRequest*, int64_t))(Il2CppBase() + 0x1749CE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749CE8))(this);
	}
	template <typename T = void> T set_Key(Il2CppString* value) {
		return ((T (*)(ClanAddGameDictionaryRequest*, Il2CppString*))(Il2CppBase() + 0x1749CF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749D70))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(ClanAddGameDictionaryRequest*, Il2CppString*))(Il2CppBase() + 0x1749D78))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x1749DF8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x1749E68))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749EF0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749FA0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x174A004))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x174A0F0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x174A238))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x174A2B0))(this, input);
	}

};

}
