#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class KickUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "KickUserRequest"));
	}

	template <typename T = MessageParser1KickUserRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ToClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Clan*> T& toClan_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& FromClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Clan*> T& fromClan_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1KickUserRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x14EC584))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x14EC5E8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC708))(this);
	}
	template <typename T = KickUserRequest*> T Clone() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC7EC))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC848))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(KickUserRequest*, int64_t))(Il2CppBase() + 0x14EC850))(this, value);
	}
	template <typename T = Clan*> T get_ToClan() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC858))(this);
	}
	template <typename T = void> T set_ToClan(Clan* value) {
		return ((T (*)(KickUserRequest*, Clan*))(Il2CppBase() + 0x14EC860))(this, value);
	}
	template <typename T = Clan*> T get_FromClan() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC868))(this);
	}
	template <typename T = void> T set_FromClan(Clan* value) {
		return ((T (*)(KickUserRequest*, Clan*))(Il2CppBase() + 0x14EC870))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(KickUserRequest*, Il2CppObject*))(Il2CppBase() + 0x14EC878))(this, other);
	}
	template <typename T = bool> T Equals_1(KickUserRequest* other) {
		return ((T (*)(KickUserRequest*, KickUserRequest*))(Il2CppBase() + 0x14EC8E8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC95C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14EC9DC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(KickUserRequest*, uintptr_t))(Il2CppBase() + 0x14ECA40))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(KickUserRequest*))(Il2CppBase() + 0x14ECAF0))(this);
	}
	template <typename T = void> T MergeFrom(KickUserRequest* other) {
		return ((T (*)(KickUserRequest*, KickUserRequest*))(Il2CppBase() + 0x14ECBE8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(KickUserRequest*, uintptr_t))(Il2CppBase() + 0x14ECCF4))(this, input);
	}

};

}
