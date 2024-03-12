#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClanKickUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClanKickUserResponse"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& DisbandFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& disband_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1CCA4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1CD08))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CE28))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CF28))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CF84))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaClanKickUserResponse*, int32_t))(Il2CppBase() + 0x1A1CF8C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1CF94))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaClanKickUserResponse*, Il2CppString*))(Il2CppBase() + 0x1A1CF9C))(this, value);
	}
	template <typename T = bool> T get_Disband() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D01C))(this);
	}
	template <typename T = void> T set_Disband(bool value) {
		return ((T (*)(ArenaClanKickUserResponse*, bool))(Il2CppBase() + 0x1A1D024))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D030))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D0A0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D11C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D1B4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D218))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaClanKickUserResponse*))(Il2CppBase() + 0x1A1D2D0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D3AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaClanKickUserResponse*, uintptr_t))(Il2CppBase() + 0x1A1D404))(this, input);
	}

};

}
