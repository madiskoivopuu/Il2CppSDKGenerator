#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserChangeTestGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserChangeTestGroup"));
	}

	template <typename T = MessageParser1ArenaUserChangeTestGroup*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TestGroupFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& testGroup_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaUserChangeTestGroup*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2859CA8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2859D0C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859E2C))(this);
	}
	template <typename T = ArenaUserChangeTestGroup*> T Clone() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859ED4))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859F30))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserChangeTestGroup*, int64_t))(Il2CppBase() + 0x2859F38))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859F40))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserChangeTestGroup*, int64_t))(Il2CppBase() + 0x2859F48))(this, value);
	}
	template <typename T = int32_t> T get_TestGroup() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859F50))(this);
	}
	template <typename T = void> T set_TestGroup(int32_t value) {
		return ((T (*)(ArenaUserChangeTestGroup*, int32_t))(Il2CppBase() + 0x2859F58))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserChangeTestGroup*, Il2CppObject*))(Il2CppBase() + 0x2859F60))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserChangeTestGroup* other) {
		return ((T (*)(ArenaUserChangeTestGroup*, ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A00C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A05C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A0E8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserChangeTestGroup*, uintptr_t))(Il2CppBase() + 0x285A14C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A1FC))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserChangeTestGroup* other) {
		return ((T (*)(ArenaUserChangeTestGroup*, ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A2F4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserChangeTestGroup*, uintptr_t))(Il2CppBase() + 0x285A320))(this, input);
	}

};

}
