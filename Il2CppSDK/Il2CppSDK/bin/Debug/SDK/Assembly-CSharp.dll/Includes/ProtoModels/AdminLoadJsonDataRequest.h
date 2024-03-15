#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminLoadJsonDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminLoadJsonDataRequest"));
	}

	 static MessageParser1ProtoModels::AdminLoadJsonDataRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminLoadJsonDataRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AccountIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& accountID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NeedUserFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& needUser_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& NeedWorldFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& needWorld_() {
		return *(R*)((uintptr_t)this + 0x21);
	}

	 static MessageParser1ProtoModels::AdminLoadJsonDataRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminLoadJsonDataRequest*>* (*)(void *))(Il2CppBase() + 0x12931A4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1293208))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293328))(this);
	}
	template <typename R = ProtoModels::AdminLoadJsonDataRequest*> R Clone() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x12933D8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293434))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminLoadJsonDataRequest*, int64_t))(Il2CppBase() + 0x129343C))(this, value);
	}
	template <typename R = int64_t> R get_AccountID() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293444))(this);
	}
	template <typename R = void> R set_AccountID(int64_t value) {
		return ((R (*)(AdminLoadJsonDataRequest*, int64_t))(Il2CppBase() + 0x129344C))(this, value);
	}
	template <typename R = bool> R get_NeedUser() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293454))(this);
	}
	template <typename R = void> R set_NeedUser(bool value) {
		return ((R (*)(AdminLoadJsonDataRequest*, bool))(Il2CppBase() + 0x129345C))(this, value);
	}
	template <typename R = bool> R get_NeedWorld() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293468))(this);
	}
	template <typename R = void> R set_NeedWorld(bool value) {
		return ((R (*)(AdminLoadJsonDataRequest*, bool))(Il2CppBase() + 0x1293470))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminLoadJsonDataRequest*, Il2CppObject*))(Il2CppBase() + 0x129347C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminLoadJsonDataRequest* other) {
		return ((R (*)(AdminLoadJsonDataRequest*, ProtoModels::AdminLoadJsonDataRequest*))(Il2CppBase() + 0x12934EC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293568))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293618))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x129367C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293758))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminLoadJsonDataRequest* other) {
		return ((R (*)(AdminLoadJsonDataRequest*, ProtoModels::AdminLoadJsonDataRequest*))(Il2CppBase() + 0x1293838))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminLoadJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1293870))(this, input);
	}

};

}
