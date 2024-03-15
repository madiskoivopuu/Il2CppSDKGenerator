#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FriendPairListType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FriendPairListType"));
	}

	 static MessageParser1<ProtoModels::FriendPairListType*>*& _parser() {
		return *(MessageParser1<ProtoModels::FriendPairListType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& FriendsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::FriendPairType*>*& _repeated_friends_codec() {
		return *(FieldCodec1<ProtoModels::FriendPairType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::FriendPairType*>*& friends_() {
		return *(RepeatedField1<ProtoModels::FriendPairType*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::FriendPairListType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::FriendPairListType*>* (*)(void *))(Il2CppBase() + 0x15FD08C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15FD0F0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(FriendPairListType*))(Il2CppBase() + 0x15FD210))(this);
	}
	template <typename R = ProtoModels::FriendPairListType*> R Clone() {
		return ((R (*)(FriendPairListType*))(Il2CppBase() + 0x15FD368))(this);
	}
	 RepeatedField1<ProtoModels::FriendPairType*>* get_Friends() {
		return ((RepeatedField1<ProtoModels::FriendPairType*>* (*)(FriendPairListType*))(Il2CppBase() + 0x15FD3C4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(FriendPairListType*, Il2CppObject*))(Il2CppBase() + 0x15FD3CC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::FriendPairListType* other) {
		return ((R (*)(FriendPairListType*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x15FD43C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(FriendPairListType*))(Il2CppBase() + 0x15FD4C8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(FriendPairListType*))(Il2CppBase() + 0x15FD4F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(FriendPairListType*, uintptr_t))(Il2CppBase() + 0x15FD558))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(FriendPairListType*))(Il2CppBase() + 0x15FD5F8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::FriendPairListType* other) {
		return ((R (*)(FriendPairListType*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x15FD688))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(FriendPairListType*, uintptr_t))(Il2CppBase() + 0x15FD700))(this, input);
	}

};

}
