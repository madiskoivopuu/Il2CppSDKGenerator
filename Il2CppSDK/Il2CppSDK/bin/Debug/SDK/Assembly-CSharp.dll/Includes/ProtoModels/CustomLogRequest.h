#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CustomLogRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CustomLogRequest"));
	}

	template <typename T = MessageParser1CustomLogRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& EventTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CoordinatorCustomLogType*> T& eventType_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ParamFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& param_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1CustomLogRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD6FAC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD7010))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7130))(this);
	}
	template <typename T = CustomLogRequest*> T Clone() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7240))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD729C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CustomLogRequest*, int64_t))(Il2CppBase() + 0x1BD72A4))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD72AC))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(CustomLogRequest*, int64_t))(Il2CppBase() + 0x1BD72B4))(this, value);
	}
	template <typename T = CoordinatorCustomLogType*> T get_EventType() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD72BC))(this);
	}
	template <typename T = void> T set_EventType(CoordinatorCustomLogType* value) {
		return ((T (*)(CustomLogRequest*, CoordinatorCustomLogType*))(Il2CppBase() + 0x1BD72C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Param() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD72CC))(this);
	}
	template <typename T = void> T set_Param(Il2CppString* value) {
		return ((T (*)(CustomLogRequest*, Il2CppString*))(Il2CppBase() + 0x1BD72D4))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7354))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(CustomLogRequest*, int32_t))(Il2CppBase() + 0x1BD735C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CustomLogRequest*, Il2CppObject*))(Il2CppBase() + 0x1BD7364))(this, other);
	}
	template <typename T = bool> T Equals_1(CustomLogRequest* other) {
		return ((T (*)(CustomLogRequest*, CustomLogRequest*))(Il2CppBase() + 0x1BD73D4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD7464))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD752C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CustomLogRequest*, uintptr_t))(Il2CppBase() + 0x1BD7590))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CustomLogRequest*))(Il2CppBase() + 0x1BD76A0))(this);
	}
	template <typename T = void> T MergeFrom(CustomLogRequest* other) {
		return ((T (*)(CustomLogRequest*, CustomLogRequest*))(Il2CppBase() + 0x1BD781C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CustomLogRequest*, uintptr_t))(Il2CppBase() + 0x1BD788C))(this, input);
	}

};

}
