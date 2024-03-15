#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserRegionResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserRegionResponse"));
	}

	 static MessageParser1ProtoModels::UserRegionResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UserRegionResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UrlFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& url_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ServersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ServerInfo*>*& _repeated_servers_codec() {
		return *(FieldCodec1ProtoModels::ServerInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ServerInfo*>*& servers_() {
		return *(RepeatedField1ProtoModels::ServerInfo*>**)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::UserRegionResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserRegionResponse*>* (*)(void *))(Il2CppBase() + 0x2476634))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2476698))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x24767B8))(this);
	}
	template <typename R = ProtoModels::UserRegionResponse*> R Clone() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x247698C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x24769E8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserRegionResponse*, int32_t))(Il2CppBase() + 0x24769F0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x24769F8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserRegionResponse*, Il2CppString*))(Il2CppBase() + 0x2476A00))(this, value);
	}
	template <typename R = Il2CppString*> R get_Url() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x2476A80))(this);
	}
	template <typename R = void> R set_Url(Il2CppString* value) {
		return ((R (*)(UserRegionResponse*, Il2CppString*))(Il2CppBase() + 0x2476A88))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x2476B08))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(UserRegionResponse*, Il2CppString*))(Il2CppBase() + 0x2476B10))(this, value);
	}
	 RepeatedField1ProtoModels::ServerInfo*>* get_Servers() {
		return ((RepeatedField1ProtoModels::ServerInfo*>* (*)(UserRegionResponse*))(Il2CppBase() + 0x2476B90))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserRegionResponse*, Il2CppObject*))(Il2CppBase() + 0x2476B98))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserRegionResponse* other) {
		return ((R (*)(UserRegionResponse*, ProtoModels::UserRegionResponse*))(Il2CppBase() + 0x2476C08))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x2476CE0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x2476DA8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserRegionResponse*, uintptr_t))(Il2CppBase() + 0x2476E0C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserRegionResponse*))(Il2CppBase() + 0x2476F84))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserRegionResponse* other) {
		return ((R (*)(UserRegionResponse*, ProtoModels::UserRegionResponse*))(Il2CppBase() + 0x247713C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserRegionResponse*, uintptr_t))(Il2CppBase() + 0x2477208))(this, input);
	}

};

}
