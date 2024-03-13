#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class JoinUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "JoinUserRequest"));
	}

	template <typename T = MessageParser1JoinUserRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ToClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Clan*> T& toClan_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& InvitesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Invite*>*> static T& _repeated_invites_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Invite*>*> T& invites_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1JoinUserRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E4160))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E41C4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E42E4))(this);
	}
	template <typename T = JoinUserRequest*> T Clone() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4474))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E44D0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(JoinUserRequest*, int64_t))(Il2CppBase() + 0x14E44D8))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E44E0))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(JoinUserRequest*, int32_t))(Il2CppBase() + 0x14E44E8))(this, value);
	}
	template <typename T = Clan*> T get_ToClan() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E44F0))(this);
	}
	template <typename T = void> T set_ToClan(Clan* value) {
		return ((T (*)(JoinUserRequest*, Clan*))(Il2CppBase() + 0x14E44F8))(this, value);
	}
	template <typename T = RepeatedField1Invite*>*> T get_Invites() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4500))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(JoinUserRequest*, Il2CppObject*))(Il2CppBase() + 0x14E4508))(this, other);
	}
	template <typename T = bool> T Equals_1(JoinUserRequest* other) {
		return ((T (*)(JoinUserRequest*, JoinUserRequest*))(Il2CppBase() + 0x14E4578))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4638))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E46D8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(JoinUserRequest*, uintptr_t))(Il2CppBase() + 0x14E473C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4860))(this);
	}
	template <typename T = void> T MergeFrom(JoinUserRequest* other) {
		return ((T (*)(JoinUserRequest*, JoinUserRequest*))(Il2CppBase() + 0x14E49C4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(JoinUserRequest*, uintptr_t))(Il2CppBase() + 0x14E4AB4))(this, input);
	}

};

}
