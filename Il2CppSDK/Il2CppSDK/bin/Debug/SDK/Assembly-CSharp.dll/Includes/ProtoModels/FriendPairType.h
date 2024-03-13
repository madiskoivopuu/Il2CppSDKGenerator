#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FriendPairType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FriendPairType"));
	}

	template <typename T = MessageParser1FriendPairType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClanAIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanAID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClanBIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanBID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1FriendPairType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15FD9AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15FDA10))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDB30))(this);
	}
	template <typename T = FriendPairType*> T Clone() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDBD0))(this);
	}
	template <typename T = int64_t> T get_ClanAID() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDC2C))(this);
	}
	template <typename T = void> T set_ClanAID(int64_t value) {
		return ((T (*)(FriendPairType*, int64_t))(Il2CppBase() + 0x15FDC34))(this, value);
	}
	template <typename T = int64_t> T get_ClanBID() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDC3C))(this);
	}
	template <typename T = void> T set_ClanBID(int64_t value) {
		return ((T (*)(FriendPairType*, int64_t))(Il2CppBase() + 0x15FDC44))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(FriendPairType*, Il2CppObject*))(Il2CppBase() + 0x15FDC4C))(this, other);
	}
	template <typename T = bool> T Equals_1(FriendPairType* other) {
		return ((T (*)(FriendPairType*, FriendPairType*))(Il2CppBase() + 0x15FDCE8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDD28))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDD94))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(FriendPairType*, uintptr_t))(Il2CppBase() + 0x15FDDF8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(FriendPairType*))(Il2CppBase() + 0x15FDE7C))(this);
	}
	template <typename T = void> T MergeFrom(FriendPairType* other) {
		return ((T (*)(FriendPairType*, FriendPairType*))(Il2CppBase() + 0x15FDF30))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(FriendPairType*, uintptr_t))(Il2CppBase() + 0x15FDF50))(this, input);
	}

};

}
