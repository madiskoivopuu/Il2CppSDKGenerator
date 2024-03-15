#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CustomLogRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CustomLogRequest"));
	}

	 static MessageParser1<ProtoModels::CustomLogRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::CustomLogRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EventTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CoordinatorCustomLogType> R& eventType_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ParamFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& param_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::CustomLogRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CustomLogRequest*>* (*)(void *))(Il2CppBase() + 0x1BD6FAC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1BD7010))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7130))(this);
	}
	template <typename R = ProtoModels::CustomLogRequest*> R Clone() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7240))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD729C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CustomLogRequest*, int64_t))(Il2CppBase() + 0x1BD72A4))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD72AC))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(CustomLogRequest*, int64_t))(Il2CppBase() + 0x1BD72B4))(this, value);
	}
	template <typename R = ProtoModels::CoordinatorCustomLogType> R get_EventType() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD72BC))(this);
	}
	template <typename R = void> R set_EventType(ProtoModels::CoordinatorCustomLogType value) {
		return ((R (*)(CustomLogRequest*, ProtoModels::CoordinatorCustomLogType))(Il2CppBase() + 0x1BD72C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Param() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD72CC))(this);
	}
	template <typename R = void> R set_Param(Il2CppString* value) {
		return ((R (*)(CustomLogRequest*, Il2CppString*))(Il2CppBase() + 0x1BD72D4))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7354))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(CustomLogRequest*, int32_t))(Il2CppBase() + 0x1BD735C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CustomLogRequest*, Il2CppObject*))(Il2CppBase() + 0x1BD7364))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CustomLogRequest* other) {
		return ((R (*)(CustomLogRequest*, ProtoModels::CustomLogRequest*))(Il2CppBase() + 0x1BD73D4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7464))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD752C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CustomLogRequest*, uintptr_t))(Il2CppBase() + 0x1BD7590))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD76A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CustomLogRequest* other) {
		return ((R (*)(CustomLogRequest*, ProtoModels::CustomLogRequest*))(Il2CppBase() + 0x1BD781C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CustomLogRequest*, uintptr_t))(Il2CppBase() + 0x1BD788C))(this, input);
	}

};

}
