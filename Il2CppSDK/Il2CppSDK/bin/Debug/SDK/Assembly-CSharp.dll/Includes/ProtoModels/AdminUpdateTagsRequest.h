#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminUpdateTagsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminUpdateTagsRequest"));
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
	template <typename T = int32_t> static T& AccountIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& accountID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NewTagsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& newTags_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1296464))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12964C8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12965E8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x1296690))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12966EC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminUpdateTagsRequest*, int64_t))(Il2CppBase() + 0x12966F4))(this, value);
	}
	template <typename T = int64_t> T get_AccountID() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12966FC))(this);
	}
	template <typename T = void> T set_AccountID(int64_t value) {
		return ((T (*)(AdminUpdateTagsRequest*, int64_t))(Il2CppBase() + 0x1296704))(this, value);
	}
	template <typename T = int64_t> T get_NewTags() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x129670C))(this);
	}
	template <typename T = void> T set_NewTags(int64_t value) {
		return ((T (*)(AdminUpdateTagsRequest*, int64_t))(Il2CppBase() + 0x1296714))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x129671C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x12967C8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x1296818))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12968A0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x1296904))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminUpdateTagsRequest*))(Il2CppBase() + 0x12969B4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x1296AAC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminUpdateTagsRequest*, uintptr_t))(Il2CppBase() + 0x1296AD8))(this, input);
	}

};

}
