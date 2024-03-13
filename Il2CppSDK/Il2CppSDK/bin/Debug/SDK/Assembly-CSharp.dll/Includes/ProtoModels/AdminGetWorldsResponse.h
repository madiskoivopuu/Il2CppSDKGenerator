#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetWorldsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetWorldsResponse"));
	}

	template <typename T = MessageParser1AdminGetWorldsResponse*>*> static T& _parser() {
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
	template <typename T = FieldCodec1MonitorWorld*>*> static T& _repeated_worlds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1MonitorWorld*>*> T& worlds_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1AdminGetWorldsResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12925B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1292618))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292738))(this);
	}
	template <typename T = AdminGetWorldsResponse*> T Clone() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x12928CC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292928))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetWorldsResponse*, int32_t))(Il2CppBase() + 0x1292930))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292938))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetWorldsResponse*, Il2CppString*))(Il2CppBase() + 0x1292940))(this, value);
	}
	template <typename T = RepeatedField1MonitorWorld*>*> T get_Worlds() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x12929C0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetWorldsResponse*, Il2CppObject*))(Il2CppBase() + 0x12929C8))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetWorldsResponse* other) {
		return ((T (*)(AdminGetWorldsResponse*, AdminGetWorldsResponse*))(Il2CppBase() + 0x1292A38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292AE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292B70))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetWorldsResponse*, uintptr_t))(Il2CppBase() + 0x1292BD4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetWorldsResponse*))(Il2CppBase() + 0x1292CE4))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetWorldsResponse* other) {
		return ((T (*)(AdminGetWorldsResponse*, AdminGetWorldsResponse*))(Il2CppBase() + 0x1292E14))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetWorldsResponse*, uintptr_t))(Il2CppBase() + 0x1292EB0))(this, input);
	}

};

}
