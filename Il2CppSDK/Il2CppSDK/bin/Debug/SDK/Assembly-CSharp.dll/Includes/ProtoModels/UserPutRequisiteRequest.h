#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPutRequisiteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPutRequisiteRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PutRequisiteFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& putRequisite_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2474954))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24749B8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474AD8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474B9C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474BF8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserPutRequisiteRequest*, int64_t))(Il2CppBase() + 0x2474C00))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474C08))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserPutRequisiteRequest*, int64_t))(Il2CppBase() + 0x2474C10))(this, value);
	}
	template <typename T = uintptr_t> T get_PutRequisite() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474C18))(this);
	}
	template <typename T = void> T set_PutRequisite(uintptr_t value) {
		return ((T (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2474C20))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2474C28))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2474C98))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474CE4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474D68))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2474DCC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserPutRequisiteRequest*))(Il2CppBase() + 0x2474E7C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2474F74))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserPutRequisiteRequest*, uintptr_t))(Il2CppBase() + 0x2475038))(this, input);
	}

};

}
