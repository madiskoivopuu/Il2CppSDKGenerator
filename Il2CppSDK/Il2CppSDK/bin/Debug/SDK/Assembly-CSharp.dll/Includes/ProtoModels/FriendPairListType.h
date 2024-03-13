#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FriendPairListType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FriendPairListType"));
	}

	template <typename T = MessageParser1FriendPairListType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FriendsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1FriendPairType*>*> static T& _repeated_friends_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1FriendPairType*>*> T& friends_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1FriendPairListType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15FD08C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15FD0F0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(FriendPairListType*))(Il2CppBase() + 0x15FD210))(this);
	}
	template <typename T = FriendPairListType*> T Clone() {
		return ((T (*)(FriendPairListType*))(Il2CppBase() + 0x15FD368))(this);
	}
	template <typename T = RepeatedField1FriendPairType*>*> T get_Friends() {
		return ((T (*)(FriendPairListType*))(Il2CppBase() + 0x15FD3C4))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(FriendPairListType*, Il2CppObject*))(Il2CppBase() + 0x15FD3CC))(this, other);
	}
	template <typename T = bool> T Equals_1(FriendPairListType* other) {
		return ((T (*)(FriendPairListType*, FriendPairListType*))(Il2CppBase() + 0x15FD43C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(FriendPairListType*))(Il2CppBase() + 0x15FD4C8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FriendPairListType*))(Il2CppBase() + 0x15FD4F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(FriendPairListType*, uintptr_t))(Il2CppBase() + 0x15FD558))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(FriendPairListType*))(Il2CppBase() + 0x15FD5F8))(this);
	}
	template <typename T = void> T MergeFrom(FriendPairListType* other) {
		return ((T (*)(FriendPairListType*, FriendPairListType*))(Il2CppBase() + 0x15FD688))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(FriendPairListType*, uintptr_t))(Il2CppBase() + 0x15FD700))(this, input);
	}

};

}
