#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerResponse"));
	}

	template <typename T = MessageParser1PlayerResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Clan*> T& clan_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1PlayerResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x156D7A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x156D80C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156D92C))(this);
	}
	template <typename T = PlayerResponse*> T Clone() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DA48))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DAA4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(PlayerResponse*, int32_t))(Il2CppBase() + 0x156DAAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DAB4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(PlayerResponse*, Il2CppString*))(Il2CppBase() + 0x156DABC))(this, value);
	}
	template <typename T = Clan*> T get_Clan() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DB3C))(this);
	}
	template <typename T = void> T set_Clan(Clan* value) {
		return ((T (*)(PlayerResponse*, Clan*))(Il2CppBase() + 0x156DB44))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PlayerResponse*, Il2CppObject*))(Il2CppBase() + 0x156DB4C))(this, other);
	}
	template <typename T = bool> T Equals_1(PlayerResponse* other) {
		return ((T (*)(PlayerResponse*, PlayerResponse*))(Il2CppBase() + 0x156DBBC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DC30))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DCBC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PlayerResponse*, uintptr_t))(Il2CppBase() + 0x156DD20))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PlayerResponse*))(Il2CppBase() + 0x156DDD8))(this);
	}
	template <typename T = void> T MergeFrom(PlayerResponse* other) {
		return ((T (*)(PlayerResponse*, PlayerResponse*))(Il2CppBase() + 0x156DEDC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PlayerResponse*, uintptr_t))(Il2CppBase() + 0x156DFAC))(this, input);
	}

};

}
