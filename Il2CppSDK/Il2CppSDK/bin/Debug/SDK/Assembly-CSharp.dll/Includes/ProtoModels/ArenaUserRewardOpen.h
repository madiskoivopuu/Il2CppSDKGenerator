#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserRewardOpen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserRewardOpen"));
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
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ProductIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& productID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2865758))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x28657BC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x28658DC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865984))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x28659E0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserRewardOpen*, int64_t))(Il2CppBase() + 0x28659E8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x28659F0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserRewardOpen*, int64_t))(Il2CppBase() + 0x28659F8))(this, value);
	}
	template <typename T = int32_t> T get_ProductID() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865A00))(this);
	}
	template <typename T = void> T set_ProductID(int32_t value) {
		return ((T (*)(ArenaUserRewardOpen*, int32_t))(Il2CppBase() + 0x2865A08))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865A10))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865ABC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865B0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865B98))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865BFC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserRewardOpen*))(Il2CppBase() + 0x2865CAC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865DA4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserRewardOpen*, uintptr_t))(Il2CppBase() + 0x2865DD0))(this, input);
	}

};

}
