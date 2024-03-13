#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetArenaStatisticResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetArenaStatisticResponse"));
	}

	template <typename T = MessageParser1AdminGetArenaStatisticResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& users_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& WorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& worlds_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& GmapsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& gmaps_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MetricNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& metricName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& MetricValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& metricValue_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1AdminGetArenaStatisticResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B21AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B2210))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2330))(this);
	}
	template <typename T = AdminGetArenaStatisticResponse*> T Clone() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B247C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B24D8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B24E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B24E8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B24F0))(this, value);
	}
	template <typename T = int32_t> T get_Users() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2570))(this);
	}
	template <typename T = void> T set_Users(int32_t value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B2578))(this, value);
	}
	template <typename T = int32_t> T get_Worlds() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2580))(this);
	}
	template <typename T = void> T set_Worlds(int32_t value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B2588))(this, value);
	}
	template <typename T = int32_t> T get_Gmaps() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2590))(this);
	}
	template <typename T = void> T set_Gmaps(int32_t value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, int32_t))(Il2CppBase() + 0x18B2598))(this, value);
	}
	template <typename T = Il2CppString*> T get_MetricName() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B25A0))(this);
	}
	template <typename T = void> T set_MetricName(Il2CppString* value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B25A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_MetricValue() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2628))(this);
	}
	template <typename T = void> T set_MetricValue(Il2CppString* value) {
		return ((T (*)(AdminGetArenaStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B2630))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetArenaStatisticResponse*, Il2CppObject*))(Il2CppBase() + 0x18B26B0))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetArenaStatisticResponse* other) {
		return ((T (*)(AdminGetArenaStatisticResponse*, AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2720))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B27DC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B28E4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetArenaStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B2948))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2AC0))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetArenaStatisticResponse* other) {
		return ((T (*)(AdminGetArenaStatisticResponse*, AdminGetArenaStatisticResponse*))(Il2CppBase() + 0x18B2CC4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetArenaStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B2D6C))(this, input);
	}

};

}
