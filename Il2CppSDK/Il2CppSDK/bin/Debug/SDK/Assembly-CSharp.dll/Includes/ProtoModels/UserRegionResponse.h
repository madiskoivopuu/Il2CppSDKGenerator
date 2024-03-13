#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserRegionResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserRegionResponse"));
	}

	template <typename T = MessageParser1UserRegionResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& UrlFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& url_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ServersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ServerInfo*>*> static T& _repeated_servers_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ServerInfo*>*> T& servers_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1UserRegionResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2476634))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2476698))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x24767B8))(this);
	}
	template <typename T = UserRegionResponse*> T Clone() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x247698C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x24769E8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserRegionResponse*, int32_t))(Il2CppBase() + 0x24769F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x24769F8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserRegionResponse*, Il2CppString*))(Il2CppBase() + 0x2476A00))(this, value);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x2476A80))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(UserRegionResponse*, Il2CppString*))(Il2CppBase() + 0x2476A88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x2476B08))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(UserRegionResponse*, Il2CppString*))(Il2CppBase() + 0x2476B10))(this, value);
	}
	template <typename T = RepeatedField1ServerInfo*>*> T get_Servers() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x2476B90))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserRegionResponse*, Il2CppObject*))(Il2CppBase() + 0x2476B98))(this, other);
	}
	template <typename T = bool> T Equals_1(UserRegionResponse* other) {
		return ((T (*)(UserRegionResponse*, UserRegionResponse*))(Il2CppBase() + 0x2476C08))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x2476CE0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x2476DA8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserRegionResponse*, uintptr_t))(Il2CppBase() + 0x2476E0C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserRegionResponse*))(Il2CppBase() + 0x2476F84))(this);
	}
	template <typename T = void> T MergeFrom(UserRegionResponse* other) {
		return ((T (*)(UserRegionResponse*, UserRegionResponse*))(Il2CppBase() + 0x247713C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserRegionResponse*, uintptr_t))(Il2CppBase() + 0x2477208))(this, input);
	}

};

}
