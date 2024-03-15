#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetArenaStatisticResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetArenaStatisticResponse"));
	}

	 static MessageParser1<ProtoModels::AdminGetArenaStatisticResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetArenaStatisticResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& users_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& WorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& worlds_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& GmapsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& gmaps_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& MetricNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& metricName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& MetricValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& metricValue_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1<ProtoModels::AdminGetArenaStatisticResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetArenaStatisticResponse*>* (*)(void *))(Il2CppBase() + 0x18B21AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B2210))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2330))(this);
	}
	template <typename R = ProtoModels::AdminGetArenaStatisticResponse*> R Clone() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B247C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B24D8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B24E0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B24E8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B24F0))(this, value);
	}
	template <typename R = int32_t> R get_Users() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2570))(this);
	}
	template <typename R = void> R set_Users(int32_t value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B2578))(this, value);
	}
	template <typename R = int32_t> R get_Worlds() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2580))(this);
	}
	template <typename R = void> R set_Worlds(int32_t value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B2588))(this, value);
	}
	template <typename R = int32_t> R get_Gmaps() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2590))(this);
	}
	template <typename R = void> R set_Gmaps(int32_t value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B2598))(this, value);
	}
	template <typename R = Il2CppString*> R get_MetricName() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B25A0))(this);
	}
	template <typename R = void> R set_MetricName(Il2CppString* value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B25A8))(this, value);
	}
	template <typename R = Il2CppString*> R get_MetricValue() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2628))(this);
	}
	template <typename R = void> R set_MetricValue(Il2CppString* value) {
		return ((R (*)(AdminGetArenaStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B2630))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetArenaStatisticResponse*, Il2CppObject*))(Il2CppBase() + 0x18B26B0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetArenaStatisticResponse* other) {
		return ((R (*)(AdminGetArenaStatisticResponse*, ProtoModels::AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2720))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B27DC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B28E4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetArenaStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B2948))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2AC0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetArenaStatisticResponse* other) {
		return ((R (*)(AdminGetArenaStatisticResponse*, ProtoModels::AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2CC4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetArenaStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B2D6C))(this, input);
	}

};

}
