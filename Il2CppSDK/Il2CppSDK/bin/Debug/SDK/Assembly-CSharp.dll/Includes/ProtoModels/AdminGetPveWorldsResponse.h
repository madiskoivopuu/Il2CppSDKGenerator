#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPveWorldsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPveWorldsResponse"));
	}

	template <typename T = MessageParser1AdminGetPveWorldsResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1MonitorPveWorld*>*> static T& _repeated_worlds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1MonitorPveWorld*>*> T& worlds_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1AdminGetPveWorldsResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B4A5C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B4AC0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4BE0))(this);
	}
	template <typename T = AdminGetPveWorldsResponse*> T Clone() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4D74))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4DD0))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetPveWorldsResponse*, int32_t))(Il2CppBase() + 0x18B4DD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4DE0))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetPveWorldsResponse*, Il2CppString*))(Il2CppBase() + 0x18B4DE8))(this, value);
	}
	template <typename T = RepeatedField1MonitorPveWorld*>*> T get_Worlds() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4E68))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetPveWorldsResponse*, Il2CppObject*))(Il2CppBase() + 0x18B4E70))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetPveWorldsResponse* other) {
		return ((T (*)(AdminGetPveWorldsResponse*, AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4EE0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B4F90))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B5018))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetPveWorldsResponse*, uintptr_t))(Il2CppBase() + 0x18B507C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B518C))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetPveWorldsResponse* other) {
		return ((T (*)(AdminGetPveWorldsResponse*, AdminGetPveWorldsResponse*))(Il2CppBase() + 0x18B52BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetPveWorldsResponse*, uintptr_t))(Il2CppBase() + 0x18B5358))(this, input);
	}

};

}
