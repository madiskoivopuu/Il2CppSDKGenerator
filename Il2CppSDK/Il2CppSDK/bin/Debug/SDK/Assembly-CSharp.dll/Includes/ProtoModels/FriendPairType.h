#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FriendPairType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FriendPairType"));
	}

	 static MessageParser1ProtoModels::FriendPairType*>*& _parser() {
		return *(MessageParser1ProtoModels::FriendPairType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClanAIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanAID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClanBIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanBID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::FriendPairType*>* get_Parser() {
		return ((MessageParser1ProtoModels::FriendPairType*>* (*)(void *))(Il2CppBase() + 0x15FD9AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15FDA10))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDB30))(this);
	}
	template <typename R = ProtoModels::FriendPairType*> R Clone() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDBD0))(this);
	}
	template <typename R = int64_t> R get_ClanAID() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDC2C))(this);
	}
	template <typename R = void> R set_ClanAID(int64_t value) {
		return ((R (*)(FriendPairType*, int64_t))(Il2CppBase() + 0x15FDC34))(this, value);
	}
	template <typename R = int64_t> R get_ClanBID() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDC3C))(this);
	}
	template <typename R = void> R set_ClanBID(int64_t value) {
		return ((R (*)(FriendPairType*, int64_t))(Il2CppBase() + 0x15FDC44))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(FriendPairType*, Il2CppObject*))(Il2CppBase() + 0x15FDC4C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::FriendPairType* other) {
		return ((R (*)(FriendPairType*, ProtoModels::FriendPairType*))(Il2CppBase() + 0x15FDCE8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDD28))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDD94))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(FriendPairType*, uintptr_t))(Il2CppBase() + 0x15FDDF8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(FriendPairType*))(Il2CppBase() + 0x15FDE7C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::FriendPairType* other) {
		return ((R (*)(FriendPairType*, ProtoModels::FriendPairType*))(Il2CppBase() + 0x15FDF30))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(FriendPairType*, uintptr_t))(Il2CppBase() + 0x15FDF50))(this, input);
	}

};

}
