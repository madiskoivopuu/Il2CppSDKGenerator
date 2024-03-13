#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetWorldDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetWorldDataRequest"));
	}

	template <typename T = MessageParser1ArenaGetWorldDataRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& IsWorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isWorld_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaGetWorldDataRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E25230))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E25294))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E253B4))(this);
	}
	template <typename T = ArenaGetWorldDataRequest*> T Clone() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E25454))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E254B0))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaGetWorldDataRequest*, int64_t))(Il2CppBase() + 0x1E254B8))(this, value);
	}
	template <typename T = bool> T get_IsWorld() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E254C0))(this);
	}
	template <typename T = void> T set_IsWorld(bool value) {
		return ((T (*)(ArenaGetWorldDataRequest*, bool))(Il2CppBase() + 0x1E254C8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetWorldDataRequest*, Il2CppObject*))(Il2CppBase() + 0x1E254D4))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetWorldDataRequest* other) {
		return ((T (*)(ArenaGetWorldDataRequest*, ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E2557C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E255C8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E2563C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetWorldDataRequest*, uintptr_t))(Il2CppBase() + 0x1E256A0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E25724))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetWorldDataRequest* other) {
		return ((T (*)(ArenaGetWorldDataRequest*, ArenaGetWorldDataRequest*))(Il2CppBase() + 0x1E257B0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetWorldDataRequest*, uintptr_t))(Il2CppBase() + 0x1E257D0))(this, input);
	}

};

}
