#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRenameClanRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRenameClanRequest"));
	}

	template <typename T = MessageParser1ArenaRenameClanRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaRenameClanRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A95024))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A95088))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A951A8))(this);
	}
	template <typename T = ArenaRenameClanRequest*> T Clone() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A952A8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A95304))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaRenameClanRequest*, int64_t))(Il2CppBase() + 0x1A9530C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A95314))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaRenameClanRequest*, Il2CppString*))(Il2CppBase() + 0x1A9531C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9539C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaRenameClanRequest*, int64_t))(Il2CppBase() + 0x1A953A4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaRenameClanRequest*, Il2CppObject*))(Il2CppBase() + 0x1A953AC))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaRenameClanRequest* other) {
		return ((T (*)(ArenaRenameClanRequest*, ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9541C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9548C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9551C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRenameClanRequest*, uintptr_t))(Il2CppBase() + 0x1A95580))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A95638))(this);
	}
	template <typename T = void> T MergeFrom(ArenaRenameClanRequest* other) {
		return ((T (*)(ArenaRenameClanRequest*, ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9573C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRenameClanRequest*, uintptr_t))(Il2CppBase() + 0x1A95794))(this, input);
	}

};

}
