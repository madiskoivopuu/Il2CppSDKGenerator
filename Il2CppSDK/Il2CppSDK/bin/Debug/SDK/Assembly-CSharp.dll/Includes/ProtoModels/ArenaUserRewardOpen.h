#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserRewardOpen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserRewardOpen"));
	}

	 static MessageParser1<ProtoModels::ArenaUserRewardOpen*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserRewardOpen*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ProductIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& productID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaUserRewardOpen*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserRewardOpen*>* (*)(void *))(Il2CppBase() + 0x2865758))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x28657BC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x28658DC))(this);
	}
	template <typename R = ProtoModels::ArenaUserRewardOpen*> R Clone() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865984))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x28659E0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserRewardOpen*, int64_t))(Il2CppBase() + 0x28659E8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x28659F0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserRewardOpen*, int64_t))(Il2CppBase() + 0x28659F8))(this, value);
	}
	template <typename R = int32_t> R get_ProductID() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865A00))(this);
	}
	template <typename R = void> R set_ProductID(int32_t value) {
		return ((R (*)(ArenaUserRewardOpen*, int32_t))(Il2CppBase() + 0x2865A08))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserRewardOpen*, Il2CppObject*))(Il2CppBase() + 0x2865A10))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserRewardOpen* other) {
		return ((R (*)(ArenaUserRewardOpen*, ProtoModels::ArenaUserRewardOpen*))(Il2CppBase() + 0x2865ABC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865B0C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865B98))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865BFC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865CAC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserRewardOpen* other) {
		return ((R (*)(ArenaUserRewardOpen*, ProtoModels::ArenaUserRewardOpen*))(Il2CppBase() + 0x2865DA4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865DD0))(this, input);
	}

};

}
