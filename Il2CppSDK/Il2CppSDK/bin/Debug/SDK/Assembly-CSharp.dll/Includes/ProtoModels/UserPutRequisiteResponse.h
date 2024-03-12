#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPutRequisiteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPutRequisiteResponse"));
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
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2475264))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24752C8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x24753E8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x24754E4))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475540))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserPutRequisiteResponse*, int64_t))(Il2CppBase() + 0x2475548))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475550))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserPutRequisiteResponse*, int32_t))(Il2CppBase() + 0x2475558))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475560))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserPutRequisiteResponse*, Il2CppString*))(Il2CppBase() + 0x2475568))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x24755E8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x2475658))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x24756BC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x2475750))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x24757B4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserPutRequisiteResponse*))(Il2CppBase() + 0x247586C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x2475970))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserPutRequisiteResponse*, uintptr_t))(Il2CppBase() + 0x24759B0))(this, input);
	}

};

}
